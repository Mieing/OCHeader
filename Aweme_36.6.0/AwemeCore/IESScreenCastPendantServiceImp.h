@class NSString, BDScreenCastPlayItem, UIWindow;

@interface IESScreenCastPendantServiceImp : NSObject <IESScreenCastPendantService>

@property (readonly, copy, nonatomic) NSString *lastScene;
@property (readonly, copy, nonatomic) NSString *lastSubScene;
@property (readonly, nonatomic) BDScreenCastPlayItem *lastPlayItem;
@property (readonly, nonatomic) UIWindow *pendantHostWindow;
@property (readonly, nonatomic) BOOL isPendantActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)newPendantEnabled;
- (BOOL)castStateFeedbackEnabled;
- (void)updatePendantVisibility:(BOOL)a0 forScene:(id)a1 subScene:(id)a2;
- (void)setForbiddenAttachmentAreas:(id)a0;
- (void)endPendantService;
- (void)registerTapHandler;
- (BOOL)isLivePendantEnabled;
- (id)init;

@end
