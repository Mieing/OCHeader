@class NSArray, NSString;

@interface AWEElementLeftButtonPriorityStrategy : NSObject <AWEElementFilterStrategyProtocol>

@property (copy, nonatomic) NSArray *specialHandlers;
@property (copy, nonatomic) NSArray *commonHandlers;
@property (readonly, nonatomic) long long priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)activateWithContext:(id)a0;

@end
