@class AWEECOMIMLynxViewViewModel, AWEECOMIMBaseUserMsgCell, NSString, UIView;
@protocol AWEECOMIMMsgCellDelegate, IESIMBulletCellContentViewProtocol, AWEECOMIMLynxCardViewDelegate, AWEECOMIMCardComponentFailedViewProtocol;

@interface AWEECOMIMLynxCardView : UIView <IESIMBulletCellContentViewDelegate, AWEECOMIMMsgCellLifeCycle>

@property (retain, nonatomic) AWEECOMIMLynxViewViewModel *viewModel;
@property (retain, nonatomic) UIView<IESIMBulletCellContentViewProtocol> *containerView;
@property (retain, nonatomic) UIView<AWEECOMIMCardComponentFailedViewProtocol> *failedView;
@property (weak, nonatomic) id<AWEECOMIMMsgCellDelegate> delegate;
@property (weak, nonatomic) AWEECOMIMBaseUserMsgCell *superMsgCell;
@property (weak, nonatomic) id<AWEECOMIMLynxCardViewDelegate> superViewDelegate;
@property (nonatomic) BOOL notCard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)getSize:(struct CGSize { double x0; double x1; } *)a0 withModel:(id)a1;

- (void)willDisplayByMessageVisible;
- (void)didEndDisplayingByMessageVisible;
- (void)updateContainViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateViewModel:(id)a0;
- (void)updateCardSize;
- (void)p_updateExtraInfoForFPS;
- (void)p_trackConfigInfo:(id)a0;
- (BOOL)bulletTemplateCanReuseWithSchema:(id)a0;
- (void)bulletContainerDidUpdateSize:(struct CGSize { double x0; double x1; })a0;
- (void)bulletContainerDidFinishLoadWithURL:(id)a0;
- (void)bulletContainerDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)bulletContainerDidReceiveError:(id)a0;
- (void)bulletContainerDidEndConfigWithPerfInfo:(id)a0;
- (void).cxx_destruct;
- (void)updateData:(unsigned long long)a0;
- (void)viewControllerWillAppear;
- (void)viewControllerDidDisappear;

@end
