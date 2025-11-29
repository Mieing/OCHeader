@class NSString;
@protocol WAMainListNewTipsLogicDelegate;

@interface WAMainListNewTipsLogic : MMObject <MMNewTipsMgrExt>

@property (weak, nonatomic) id<WAMainListNewTipsLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)GenerateRedDotInfoParamStringForSimulatedNativeMainList;

- (id)initWithDelegate:(id)a0;
- (id)getShowInfoWithPathKey:(id)a0;
- (void)disposeNewTipsWithPathKey:(id)a0;
- (void)onTipsShowInfoChangeWithPathKey:(id)a0;
- (void).cxx_destruct;

@end
