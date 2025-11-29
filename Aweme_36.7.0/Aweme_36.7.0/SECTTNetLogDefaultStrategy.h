@class NSString;

@interface SECTTNetLogDefaultStrategy : NSObject <SECTTNetLogHandleStrategy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)process:(id)a0;
- (id)strategyName;

@end
