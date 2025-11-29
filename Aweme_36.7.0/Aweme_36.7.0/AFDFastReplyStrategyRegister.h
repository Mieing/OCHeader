@class NSString;

@interface AFDFastReplyStrategyRegister : NSObject <AFDFastReplyRegister>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerFastReplyItem:(id /* block */)a0;
+ (id)priorityStrategyMap;
+ (void)resortPriorityStrategyMap;
+ (BOOL)checkRegisterFastReplyItem:(id)a0;
+ (id)sortStrategyArray:(id)a0;
+ (id)strategyArrayWithElementPriority:(unsigned long long)a0;


@end
