@class NSString, AWEECOMIMCharDetailFloatCardModel, AWEECOMIMLynxFloatCardViewModel, AWEECOMIMLynxCardView;
@protocol AWEECOMIMCharDetailLynxFloatCardDelegate;

@interface AWEECOMIMCharDetailLynxFloatCardView : UIView <AWEECOMIMLynxCardViewDelegate>

@property (retain, nonatomic) AWEECOMIMCharDetailFloatCardModel *viewModel;
@property (retain, nonatomic) AWEECOMIMLynxFloatCardViewModel *lynxViewViewModel;
@property (retain, nonatomic) AWEECOMIMLynxCardView *lynxCardView;
@property (weak, nonatomic) id<AWEECOMIMCharDetailLynxFloatCardDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })getSizeWithModel:(id)a0;

@end
