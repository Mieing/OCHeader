@class AWEUserAvatarDecotationModel, AWEUserModel, NSString;
@protocol AWEProfileAvatarPreviewPendantButtonProtocol;

@interface AWEProfileAvatarPreviewPendantManager : NSObject <AWEProfileAvatarPreviewPendantManagerProtocol>

@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) AWEUserAvatarDecotationModel *decoration;
@property (nonatomic) BOOL isButtonClickedAction;
@property (retain, nonatomic) NSString *enterFrom;
@property (weak, nonatomic) id<AWEProfileAvatarPreviewPendantButtonProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentLoginUser;
- (BOOL)isCurrentLoginUser;
- (id)initWithUserModel:(id)a0 enterFrom:(id)a1;
- (void)gotoPendantCenter;
- (void)showFirstCreativeGuide;
- (void)hintUserNotQualifiedForFirstPublishPendant;
- (void)triggerButtonActions:(id)a0;
- (void)pushInAppVC;
- (void)showPendantGuideWhenButtonClicked:(BOOL)a0;
- (id)appendParametersForURLString:(id)a0;
- (void)buttonClicked:(id)a0;
- (void).cxx_destruct;

@end
