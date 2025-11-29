@class CAShapeLayer;

@interface AWEIMMessageBaseVCMoreButton : UIButton

@property (retain, nonatomic) CAShapeLayer *dotLayer;
@property (nonatomic) BOOL hasShowDot;

- (BOOL)p_getGroupBlockMoreButtonGuildDotShowFlag;
- (void)p_setGroupBlockMoreButtonGuildDotShowFlag;
- (void)trySetDotLayer;
- (void)markButtonClick;
- (void).cxx_destruct;

@end
