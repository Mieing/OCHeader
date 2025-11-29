@class NSString, NSDictionary, NSArray, UIView;

@interface AWEPhotosPreviewViewControllerConfigurationBuilder : NSObject

@property (copy, nonatomic) NSString *uniqueId;
@property (nonatomic) BOOL showSaveButton;
@property (nonatomic) BOOL disableZoomTransition;
@property (nonatomic) BOOL allowLoop;
@property (nonatomic) BOOL showCloseButton;
@property (retain, nonatomic) NSDictionary *trackParamDict;
@property (copy, nonatomic) NSArray *thumbnailURLs;
@property (copy, nonatomic) NSArray *imageURLs;
@property (copy, nonatomic) NSArray *titles;
@property (copy, nonatomic) NSArray *watermarks;
@property (copy, nonatomic) NSArray *imageReqConfigs;
@property (nonatomic) long long defaultIdx;
@property (retain, nonatomic) UIView *scrollToMoreView;
@property (copy, nonatomic) id /* block */ scrollToMoreCallback;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;

@end
