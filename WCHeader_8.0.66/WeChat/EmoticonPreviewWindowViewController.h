@class NSString, UIImageView, UIImage, HLActionButton, UIView;
@protocol EmoticonPreviewWindowViewControllerDelegate;

@interface EmoticonPreviewWindowViewController : EmoticonPreviewBaseWindowViewController <EmoticonBackupOperateMgrExt>

@property (retain, nonatomic) HLActionButton *moveToFrontButton;
@property (retain, nonatomic) HLActionButton *deleteButton;
@property (retain, nonatomic) HLActionButton *showDetailButton;
@property (retain, nonatomic) HLActionButton *confirmDelButton;
@property (retain, nonatomic) UIView *horizontalDivider;
@property (retain, nonatomic) UIView *verticalDivider;
@property (nonatomic) int aligment;
@property (retain, nonatomic) UIImage *leftTipsBubble;
@property (retain, nonatomic) UIImage *rightTipsBubble;
@property (retain, nonatomic) UIImage *midTipsBubble;
@property (retain, nonatomic) UIImageView *leftButtonBubble;
@property (retain, nonatomic) UIImageView *rightButtonBubble;
@property (retain, nonatomic) UIImageView *midButtonBubble;
@property (weak, nonatomic) id<EmoticonPreviewWindowViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (id)actionButtonWithTitle:(id)a0 selector:(SEL)a1;
- (void)layoutButtonComponent;
- (void)setupButtonBubbleImageLeft:(id)a0 mid:(id)a1 right:(id)a2;
- (void)setPreviewModel:(id)a0;
- (void)layoutSubviewFrame;
- (void)changeToDeleteConfirmMode;
- (void)onDeleteEmoticon:(id)a0;
- (void)onComfirmDeleteEmoticon:(id)a0;
- (void)onMoveEmoticonToFront:(id)a0;
- (void)onShowEmotionDetailPage:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)onDeleteBackupEmoticonOK:(id)a0;
- (void)onDeleteBackupEmoticonFailed:(id)a0;
- (void)onStickyBackupEmoticonOK:(id)a0 needDealVc:(BOOL)a1;
- (void)onStickyBackupEmoticonFailed:(id)a0 needDealVc:(BOOL)a1;
- (BOOL)isSelfModEvent:(id)a0;
- (id)currentEmotionMd5;
- (void).cxx_destruct;

@end
