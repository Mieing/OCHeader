@class NSString;
@protocol AWEApplogDynamicFreqStrategyDelegate;

@interface AWEApplogDynamicFreqStrategy : NSObject <AWEExperiencePriorityElementProtocol>

@property (nonatomic) BOOL isValidNow;
@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSString *strategyName;
@property (copy, nonatomic) NSString *strategyClass;
@property (nonatomic) long long uploadFrequency;
@property (nonatomic) unsigned long long priority;
@property (weak, nonatomic) id<AWEApplogDynamicFreqStrategyDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createInstanceWithStrategyName:(id)a0 config:(id)a1 delegate:(id)a2;
+ (id)strategyClassList;

- (void)onStrategyInit;
- (id)initWithStrategyName:(id)a0 config:(id)a1 delegate:(id)a2;
- (void).cxx_destruct;

@end
