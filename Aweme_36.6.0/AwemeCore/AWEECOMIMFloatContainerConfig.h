@class UIImageView;

@interface AWEECOMIMFloatContainerConfig : NSObject

@property (retain, nonatomic) UIImageView *snapshotImageView;
@property (nonatomic) double heightPercent;
@property (nonatomic) BOOL enableTapBackgroundToClose;
@property (copy, nonatomic) id /* block */ willCloseFloatContainerBlock;
@property (copy, nonatomic) id /* block */ didCloseFloatContainerBlock;

- (void).cxx_destruct;
- (id)init;

@end
