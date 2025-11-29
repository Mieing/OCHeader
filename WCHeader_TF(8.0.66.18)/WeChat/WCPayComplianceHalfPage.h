@class NSString;

@interface WCPayComplianceHalfPage : NSObject <MMUseCaseCallback>

@property (copy, nonatomic) id /* block */ actionHandler;
@property (nonatomic) long long sessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showWithData:(id)a0 closedActionHandler:(id /* block */)a1;
+ (id)showWithPbData:(id)a0 closedActionHandler:(id /* block */)a1;

@end
