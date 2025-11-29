@class NSString, AWEECOMIMLynxCardView, AWEECOMIMLynxCardViewModel;

@interface AWEECOMIMLynxCardCell : AWEECOMIMBaseUserMsgCell <AWEECOMIMLynxCardViewDelegate>

@property (retain, nonatomic) AWEECOMIMLynxCardViewModel *cellModel;
@property (retain, nonatomic) AWEECOMIMLynxCardView *lynxCardView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)getSize:(struct CGSize { double x0; double x1; } *)a0 withModel:(id)a1;

- (void)didCustomInit;
- (void)willDisplayByMessageVisible;
- (void)didEndDisplayingByMessageVisible;
- (void)updateCardSize;
- (void)inputCompatMethodNotify:(id)a0;
- (void)setCellModel:(id)a0;
- (void).cxx_destruct;
- (void)viewControllerWillAppear;
- (void)viewControllerDidDisappear;
- (void)layoutSubviews;

@end
