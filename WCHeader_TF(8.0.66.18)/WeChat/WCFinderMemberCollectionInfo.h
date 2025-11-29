@class NSData, NSMutableArray, NSString;

@interface WCFinderMemberCollectionInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *collectionInfoArray;
@property (nonatomic) unsigned long long collectionCount;
@property (nonatomic) BOOL continueFlag;
@property (retain, nonatomic) NSData *lastBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_collectionInfoArray;
+ (void)PBArrayAdd_collectionCount;
+ (void)PBArrayAdd_continueFlag;
+ (void)PBArrayAdd_lastBuffer;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;

@end
