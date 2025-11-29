@class NSString, NSDictionary, NSArray, UIView;

@interface AWESearchPhotosPreviewControllerConfigurationBuilder : NSObject

@property (copy, nonatomic) NSString *uniqueId;
@property (nonatomic) BOOL disableZoomTransition;
@property (nonatomic) BOOL allowLoop;
@property (nonatomic) BOOL showBackButton;
@property (copy, nonatomic) NSString *btmId;
@property (copy, nonatomic) NSString *btmPageId;
@property (retain, nonatomic) NSDictionary *trackParamDict;
@property (copy, nonatomic) NSArray *thumbnailURLs;
@property (copy, nonatomic) NSArray *imageURLs;
@property (copy, nonatomic) NSArray *titles;
@property (copy, nonatomic) NSArray *watermarks;
@property (copy, nonatomic) NSArray *linkList;
@property (copy, nonatomic) NSArray *imageReqConfigs;
@property (nonatomic) long long defaultIdx;
@property (retain, nonatomic) UIView *scrollToMoreView;
@property (copy, nonatomic) id /* block */ scrollToMoreCallback;
@property (copy, nonatomic) NSDictionary *extraParams;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;

@end
