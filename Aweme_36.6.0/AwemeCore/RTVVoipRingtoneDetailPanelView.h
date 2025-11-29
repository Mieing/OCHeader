@class UIView, NSString, DUXContentSheet, DUXInfoPanel, UIImageView, UIButton, NSDictionary, AWEScrollStringLabel, UIViewController, UILabel;
@protocol RTVVoipRingtoneMusicModelProtocol, RTVVoipRingtonePlayerComponentInterface, RTVVoipRingtoneComponentInterface, DUXSheetDelegate;

@interface RTVVoipRingtoneDetailPanelView : UIView <DUXSheetDelegate>

@property (retain, nonatomic) DUXContentSheet *contentSheet;
@property (retain, nonatomic) DUXInfoPanel *popUpInfoPanel;
@property (retain, nonatomic) UIViewController *sheetVC;
@property (retain, nonatomic) UIView *ringtoneDetailView;
@property (retain, nonatomic) UIImageView *ringtoneCoverView;
@property (retain, nonatomic) AWEScrollStringLabel *ringtoneTitleLabel;
@property (retain, nonatomic) UILabel *ringtoneSubTitleLabel;
@property (retain, nonatomic) UIView *placeholderTitleLabel;
@property (retain, nonatomic) UIView *placeholderSubTitleLabel;
@property (retain, nonatomic) UIButton *ringtonePlayButton;
@property (retain, nonatomic) id<RTVVoipRingtoneMusicModelProtocol> musicModel;
@property (retain, nonatomic) id<RTVVoipRingtonePlayerComponentInterface> ringtonePlayerComponent;
@property (retain, nonatomic) id<RTVVoipRingtoneComponentInterface> ringtoneComponent;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (weak, nonatomic) id<DUXSheetDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)transferToRingtoneList:(id)a0;

- (void)sheetDidDismiss:(id)a0;
- (void)setupObserver;
- (void)useSameAction;
- (void)stopAnimationIfNeed;
- (void)startAnimationIfNeed;
- (BOOL)shouldScroll;
- (double)getTitleWidth;
- (void)showRingtoneDetailWithId:(id)a0 enablePlay:(BOOL)a1 extra:(id)a2;
- (void)showRingtoneDetailWithModel:(id)a0 enablePlay:(BOOL)a1 extra:(id)a2;
- (void)showRingtoneDetailPanel:(BOOL)a0;
- (void)setupWithRingtoneModel:(id)a0;
- (void)setupWithRingtoneNotAvailable;
- (void)setupContentSheetUI;
- (void)setupRingtoneDetailUI:(BOOL)a0;
- (id)leftSheetButtonTitle;
- (void)openListAction;
- (id)rightSheetButtonTitle;
- (void)playOrPuaseMusic;
- (void)p_traceDetailViewWithAction:(id)a0;
- (void)traceRingtoneApplyResult:(BOOL)a0;
- (void).cxx_destruct;
- (id)subTitle;
- (id)title;

@end
