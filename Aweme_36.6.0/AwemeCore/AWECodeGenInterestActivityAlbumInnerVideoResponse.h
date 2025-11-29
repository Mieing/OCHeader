@class NSArray, AWECodeGenActivityAlbumPrivilegeInfoModel;

@interface AWECodeGenInterestActivityAlbumInnerVideoResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *awemeListModelArray;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long offset;
@property (retain, nonatomic) AWECodeGenActivityAlbumPrivilegeInfoModel *privilegeModel;
@property (copy, nonatomic) NSArray *itemExtraInfoListModelArray;
@property (copy, nonatomic) NSArray *topItemIdArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
