@class NSArray, AWECodeGenActivityAnchorInfoModel, AWECodeGenActivityAlbumPrivilegeInfoModel, NSString;

@interface AWECodeGenInterestActivityAlbumMediaListResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *mediaListModelArray;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long offset;
@property (retain, nonatomic) AWECodeGenActivityAlbumPrivilegeInfoModel *privilegeModel;
@property (retain, nonatomic) AWECodeGenActivityAnchorInfoModel *activityAnchorModel;
@property (copy, nonatomic) NSString *activitySchema;
@property (copy, nonatomic) NSString *reportParams;
@property (copy, nonatomic) NSString *activityName;
@property (copy, nonatomic) NSArray *topMediaIdArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
