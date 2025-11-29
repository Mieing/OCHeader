@class NSArray, NSString;

@interface WCFinderSnsShareInfo : NSObject <PBCoding, WCTColumnCoding>

@property (nonatomic) long long type;
@property (nonatomic) unsigned int shareCount;
@property (nonatomic) unsigned int watchingCount;
@property (retain, nonatomic) NSArray *shareContactListArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_shareCount;
+ (void)PBArrayAdd_watchingCount;
+ (void)PBArrayAdd_shareContactListArray;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;
+ (id)finderSnsShareInfoFromObject:(id)a0;

@end
