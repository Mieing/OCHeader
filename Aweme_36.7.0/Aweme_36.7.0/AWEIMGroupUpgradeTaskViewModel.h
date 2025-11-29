@class AWEIMGroupUpgradeTaskModel;

@interface AWEIMGroupUpgradeTaskViewModel : NSObject

@property (nonatomic) BOOL disableResponseToClick;
@property (retain, nonatomic) AWEIMGroupUpgradeTaskModel *taskModel;
@property (nonatomic) struct CGSize { double width; double height; } tailIconImageViewSize;

- (void)clickAction;
- (id)tailIconImage;
- (void)tryResetDisableResponseToClick;
- (id)desc;
- (void).cxx_destruct;

@end
