@class NSArray, NSString;

@interface IESLiveExclusiveService : NSObject <IESLiveExclusiveService>

@property (retain, nonatomic) NSArray *exclusiveCases;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (BOOL)canOpenCaseWithOneExclusiveCase:(long long)a0 forCase:(long long)a1 toastContentString:(id)a2;
- (BOOL)canOpenCaseWithoutExclusiveCase:(long long)a0;
- (BOOL)canOpenCaseWithToastArray:(id)a0 forCase:(long long)a1;
- (BOOL)canOpenCase:(long long)a0 toastContentArray:(id)a1 isShowTopToast:(BOOL)a2;
- (BOOL)isOpen:(long long)a0;
- (void)addAExclusiveCase:(long long)a0 forCase:(long long)a1;
- (void)removeAExclusiveCase:(long long)a0 forCase:(long long)a1;
- (BOOL)canOpenKTVWithoutExclusiveCase;
- (BOOL)p_isSupportedInteractiveKTV;
- (long long)whichExclusiveCaseOpen:(long long)a0;
- (BOOL)isExclusiveWithA:(long long)a0 B:(long long)a1;
- (BOOL)isEscapeConditionWithCase:(long long)a0 exclusiveCase:(long long)a1;
- (int)p_getKWithi:(int)a0 j:(int)a1;
- (void)operateExclusiveCase:(long long)a0 forCase:(long long)a1 isExclusive:(BOOL)a2;
- (BOOL)p_isAudioSceneSupportInteractiveKTV;
- (void).cxx_destruct;

@end
