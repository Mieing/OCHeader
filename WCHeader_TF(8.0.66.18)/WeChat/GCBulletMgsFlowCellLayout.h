@class GCLabelDynamicLayout;

@interface GCBulletMgsFlowCellLayout : GCDynamicLayoutProvider

@property (nonatomic) double cellTopPadding;
@property (nonatomic) double avatarSize;
@property (nonatomic) double space;
@property (retain, nonatomic) GCLabelDynamicLayout *labelConfig;

- (id)init;
- (void).cxx_destruct;

@end
