@class NSString, NSMutableSet;

@interface WCDBCompressionRollbackRecord : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableSet *rollbackTags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_rollbackTags;
+ (void)initialize;

- (id)init;
- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
