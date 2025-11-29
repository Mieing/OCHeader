@class NSString;

@interface IESLiveBaseKTVSEIParser : NSObject <IESLiveSEIParser>

@property (copy, nonatomic) NSString *currentUserId;
@property (nonatomic) BOOL isCPUOptimize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (unsigned long long)seiType;
- (id)seiRootKey;
- (BOOL)checkTypeConditionWithMetaSEI:(id)a0;
- (id)parserMetaSEI:(id)a0;
- (unsigned long long)supportSEIModes;
- (id)customizeIndexKeyWithMetaSEI:(id)a0;
- (void).cxx_destruct;

@end
