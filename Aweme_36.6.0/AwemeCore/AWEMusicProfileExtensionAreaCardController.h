@class AWEProfileExtensionAreaCommonParamModel, AWEMusicCardExtensionModel, NSString;
@protocol AWEProfileExtensionAreaCardViewProtocol;

@interface AWEMusicProfileExtensionAreaCardController : NSObject <AWEProfileExtensionAreaCardControllerProtocol>

@property (retain, nonatomic) id<AWEProfileExtensionAreaCardViewProtocol> cardView;
@property (retain, nonatomic) AWEProfileExtensionAreaCommonParamModel *commonParamModel;
@property (nonatomic) BOOL isActiveSubtitleOnce;
@property (nonatomic) BOOL isActiveIcon;
@property (retain, nonatomic) AWEMusicCardExtensionModel *originalModel;
@property (nonatomic) BOOL isShowing;
@property (copy, nonatomic) NSString *currentSubTitle;
@property (nonatomic) BOOL isLunaIcon;
@property (nonatomic) long long currentIconShowCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardControllerWithCommonParam:(id)a0;
+ (id)shared;

- (void)passCardView:(id)a0;
- (void)cardDidClicked;
- (void)cardWillAppear;
- (void)cardWillDisappear;
- (void)cardDidDisappear;
- (void)updateCardView;
- (id)p_trackParams;
- (id)p_userWrapperKey:(id)a0;
- (void)p_extraSubTitleShowedCountPlus:(long long)a0;
- (id)p_subtitleIconClickedWrapperKey:(id)a0;
- (void)updateCustomDetailViewWithSubtitle:(id)a0 iconURL:(id)a1;
- (BOOL)p_canShowExtraSubTitle;
- (id)p_subtitleIconShowedWrapperKey:(id)a0;
- (BOOL)p_canShowIconAnimation;
- (void).cxx_destruct;
- (void)updateSubtitle;
- (BOOL)isCurrentUser;
- (void)updateIcon;

@end
