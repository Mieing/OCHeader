@class NSString;

@interface AWEFeedLiveTabGuideAnimationConfig : NSObject

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double topPadding;
@property (nonatomic) double leftPadding;
@property (nonatomic) double labelPadding;
@property (nonatomic) long long type;
@property (nonatomic) unsigned long long repeatCount;
@property (copy, nonatomic) NSString *bundleName;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *title;

- (void).cxx_destruct;
- (id)init;

@end
