@class CKGenericTemplateModel, NSString, AWEUserAvatarPostTipsView;

@interface AWEProfileAvatarPostSnackBarService : HTSService <AWEProfileAvatarPostSnackBarServiceProtocol>

@property (retain, nonatomic) AWEUserAvatarPostTipsView *tipsView;
@property (retain, nonatomic) CKGenericTemplateModel *storyTemplateModel;
@property (nonatomic) double postAvatarStartDuration;
@property (nonatomic) double postAvatarEndDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showSnackBarIfNeeded;
- (void)didTapTipAction;
- (void).cxx_destruct;

@end
