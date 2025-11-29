@class NSArray, UIView;
@protocol ACCModernAutoCaptionPanelBottomViewDelegate;

@interface ACCModernAutoCaptionPanelBottomView : UIView

@property (retain, nonatomic) NSArray *views;
@property (retain, nonatomic) UIView *splitLine;
@property (weak, nonatomic) id<ACCModernAutoCaptionPanelBottomViewDelegate> delegate;

+ (double)itemHeight;

- (void)didClickOnItem:(id)a0;
- (id)buildViewByItem:(id)a0;
- (void).cxx_destruct;
- (void)reloadWithItems:(id)a0;

@end
