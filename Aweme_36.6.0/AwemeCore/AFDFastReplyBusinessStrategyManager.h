@class NSString;

@interface AFDFastReplyBusinessStrategyManager : NSObject <AFDFastReplyStrategyManangerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)strategyWithModel:(id)a0 context:(id)a1;
+ (id)strategyWithContext:(id)a0 priority:(unsigned long long)a1;
+ (BOOL)hitRefactorWithBusinessID:(id)a0;
+ (BOOL)canShowWithContext:(id)a0 priority:(unsigned long long)a1;
+ (BOOL)canShowWithModel:(id)a0 context:(id)a1;


@end
