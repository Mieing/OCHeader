@class NSString;

@interface AWEACCModelFactoryServiceImpl : NSObject <ACCModelFactoryServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createUserModel;
- (id)createChallengeModelWithItemID:(id)a0 challengeName:(id)a1;
- (id)createCutSameTemplateModelWithEffect:(id)a0 isVideoAndPicMixed:(BOOL)a1;
- (id)createMVTemplateWithEffectModel:(id)a0 urlPrefix:(id)a1;
- (id)createTextExtra;
- (id)createTextExtra:(long long)a0;
- (id)createTextExtra:(long long)a0 subType:(long long)a1;
- (id)copyTextExtra:(id)a0;
- (id)createMusicModel;
- (id)createMusicModelWithJsonDictionary:(id)a0;
- (id)createAwemeModelWithJsonDictionary:(id)a0;
- (id)createReeditAnchorInfoModelWithJsonDictionary:(id)a0;
- (void)updateTextExtra:(id)a0 type:(long long)a1;
- (void)updateTextExtra:(id)a0 subtype:(long long)a1;

@end
