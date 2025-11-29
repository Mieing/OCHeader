@class NSString, NSMutableArray;

@interface IESLLPOIParamsVerifyManager : NSObject <IESLLPOIParamsDataManagerDelegate>

@property (retain, nonatomic) NSMutableArray *itemCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isParamsVerifyOpen;

- (void)reloadConfig;
- (void)paramsDataManagerStatusDidChange:(unsigned long long)a0;
- (id)dataManagerWithType:(long long)a0;
- (void)trackErrorWithEvent:(id)a0 params:(id)a1 error:(id)a2 alertErrorMessage:(id)a3 owner:(id)a4 type:(long long)a5;
- (long long)exceptionTypeWithType:(long long)a0 errorCode:(unsigned long long)a1;
- (void)verifyEvent:(id)a0 params:(id)a1 type:(long long)a2;
- (void).cxx_destruct;
- (void)setupManager;

@end
