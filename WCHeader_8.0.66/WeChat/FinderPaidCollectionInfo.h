@class FinderCourseInfo, FinderDramaInfo;

@interface FinderPaidCollectionInfo : WXPBGeneratedMessage

@property (retain, nonatomic) FinderCourseInfo *courseInfo;
@property (retain, nonatomic) FinderDramaInfo *dramaInfo;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int permissionFlag;

+ (id)paidCollectionWithCourse:(id)a0;
+ (id)paidCollectionWithDrama:(id)a0;
+ (void)initialize;

- (void)setPermissionFlag:(unsigned int)a0;
- (unsigned int)permissionFlag;
- (void)setType:(unsigned int)a0;
- (unsigned int)type;
- (void)setDramaInfo:(id)a0;
- (id)dramaInfo;
- (void)setCourseInfo:(id)a0;
- (id)courseInfo;
- (int)collectionType;
- (id)collectionName;
- (unsigned long long)collectionTopicID;
- (unsigned long long)collectionPrice;
- (BOOL)purchaseState;
- (BOOL)existProcessingOrder;
- (id)coverImgUrl;
- (id)collectionDesc;
- (unsigned int)feedCount;
- (unsigned int)buyCount;
- (unsigned int)feedSortID;
- (id)contact;
- (BOOL)isInvalid;
- (unsigned int)tryOutFlag;
- (BOOL)disableShared;

@end
