@class NSString;

@interface WCFinderContactFansInteractionData : NSObject <WCTColumnCoding, PBCoding>

@property (nonatomic) unsigned int memberFlag;
@property (nonatomic) unsigned int orderCount;
@property (nonatomic) unsigned int interactionCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_memberFlag;
+ (void)PBArrayAdd_orderCount;
+ (void)PBArrayAdd_interactionCount;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;

@end
