@class NSString, FinderFavInfo;

@interface WCFinderFavInfo : NSObject <PBCoding, WCTColumnCoding>

@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *headImgUrl;
@property (copy, nonatomic) NSString *favId;
@property (copy, nonatomic) NSString *username;
@property (nonatomic) unsigned int followFlag;
@property (nonatomic) unsigned int memberFlag;
@property (nonatomic) unsigned int orderCount;
@property (nonatomic) unsigned int interactionCount;
@property (nonatomic) BOOL thankFlag;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *feedID;
@property (retain, nonatomic) FinderFavInfo *info;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_nickName;
+ (void)PBArrayAdd_headImgUrl;
+ (void)PBArrayAdd_favId;
+ (void)PBArrayAdd_username;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;
+ (id)favInfoWithFinderFavInfo:(id)a0 tid:(id)a1;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (unsigned int)relationshipTypeForReport;
- (unsigned int)relationshipIconTypeForReport;
- (void).cxx_destruct;

@end
