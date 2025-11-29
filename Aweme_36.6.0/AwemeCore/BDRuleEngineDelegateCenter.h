@protocol BDRuleEngineDelegate;

@interface BDRuleEngineDelegateCenter : NSObject

@property (weak, nonatomic) id<BDRuleEngineDelegate> delegate;
@property (nonatomic) BOOL hasBeenSetup;

+ (BOOL)hasBeenSetup;
+ (id)defaultCenter;
+ (id)delegate;
+ (void)setDelegate:(id)a0;

- (void).cxx_destruct;

@end
