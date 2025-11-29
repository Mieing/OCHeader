@class IESLiveInteractReplacePanelViewModel, UILabel, NSMutableArray, UIButton;

@interface IESLiveInteractReplacePanelView : UIView

@property (retain, nonatomic) IESLiveInteractReplacePanelViewModel *model;
@property (retain, nonatomic) UILabel *topLabel;
@property (retain, nonatomic) UIButton *bottomBtn;
@property (retain, nonatomic) NSMutableArray *slotViews;

- (void)didSetAttachingDIContext;
- (void)startRender:(unsigned long long)a0;
- (void)renderSlots;
- (void)onCellClick:(id)a0;
- (void)addSuscriber;
- (void)onComfirmBlockClick;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
