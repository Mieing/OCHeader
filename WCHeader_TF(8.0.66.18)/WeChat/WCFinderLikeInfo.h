@class NSString, FinderLikeInfo;

@interface WCFinderLikeInfo : NSObject <PBCoding, WCTColumnCoding>

@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *headImgUrl;
@property (nonatomic) unsigned long long likeId;
@property (nonatomic) unsigned long long likeFlag;
@property (nonatomic) unsigned long long refuseFlag;
@property (copy, nonatomic) NSString *wxUsername;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) BOOL unRead;
@property (nonatomic) unsigned int followFlag;
@property (nonatomic) unsigned int memberFlag;
@property (nonatomic) unsigned int orderCount;
@property (nonatomic) unsigned int interactionCount;
@property (nonatomic) unsigned int thankFlag;
@property (copy, nonatomic) NSString *feedID;
@property (retain, nonatomic) FinderLikeInfo *info;
@property (nonatomic) BOOL isSelfPosted;
@property (nonatomic) BOOL isAuthorViewer;
@property (nonatomic) long long comboLikeCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_nickName;
+ (void)PBArrayAdd_headImgUrl;
+ (void)PBArrayAdd_likeId;
+ (void)PBArrayAdd_likeFlag;
+ (void)PBArrayAdd_refuseFlag;
+ (void)PBArrayAdd_wxUsername;
+ (void)PBArrayAdd_unRead;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;
+ (id)likeInfoWithFinderLikeInfo:(id)a0 tid:(id)a1;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (unsigned int)relationshipTypeForReport;
- (unsigned int)relationshipIconTypeForReport;
- (void).cxx_destruct;

@end
