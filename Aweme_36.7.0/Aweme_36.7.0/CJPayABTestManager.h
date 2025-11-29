@class NSString, NSMutableArray;

@interface CJPayABTestManager : NSObject <CJPayLibraProtocol>

@property (copy, nonatomic) NSString *unifyCashierWakeUpOptFlag;
@property (nonatomic) BOOL unifyCashierWakeUpOptHasSet;
@property (retain, nonatomic) NSMutableArray *libraKeyArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)getABTestValWithKey:(id)a0;
- (id)getABTestValWithKey:(id)a0 exposure:(BOOL)a1;
- (id)unifyCashierWakeUpOptFlagWithExposure:(BOOL)a0;
- (id)getLibraValWithKey:(id)a0;
- (BOOL)isHitUnifyCashierWakeUpOpt2;
- (id)getExperimentKeyValueDic;
- (BOOL)enableUnifyCashierWakeUpOpt1WithExposure:(BOOL)a0;
- (BOOL)enableUnifyCashierWakeUpOpt2WithExposure:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end
