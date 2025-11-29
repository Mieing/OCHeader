@class NSString, NSMutableArray, NSArray;

@interface AWEPOIAlbumCategoryInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *tabID;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long totalCount;
@property (nonatomic) long long nextOffset;
@property (retain, nonatomic) NSMutableArray *photoInfos;
@property (copy, nonatomic) NSArray *photoInfosString;
@property (nonatomic) long long tabIndex;
@property (nonatomic) BOOL shouldShowUploadButton;
@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *backendType;

+ (id)photoInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
