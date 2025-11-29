@class MMCameraTemplateItem;

@interface MJShootFollowTemplateLoadingState : NSObject

@property (retain, nonatomic) MMCameraTemplateItem *bindTemplateItem;
@property (nonatomic) BOOL hasShowingLoadingView;
@property (nonatomic) BOOL hasLoaded;
@property (nonatomic) BOOL didSwitchedTemplate;

- (void).cxx_destruct;

@end
