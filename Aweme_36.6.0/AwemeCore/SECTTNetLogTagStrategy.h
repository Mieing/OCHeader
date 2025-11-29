@class NSString;

@interface SECTTNetLogTagStrategy : NSObject <SECTTNetLogHandleStrategy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)queryTagsForURL:(id)a0;
- (id)process:(id)a0;
- (id)strategyName;

@end
