@class AWECodeGenNotLoginModuleModel, NSString, NSArray, NSNumber, AWECodeGenPostRecommendModuleModel;

@interface AWEUserPostsResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSArray *awemes;
@property (retain, nonatomic) NSNumber *total;
@property (nonatomic) BOOL hasLocateItem;
@property (retain, nonatomic) NSNumber *locateOffset;
@property (retain, nonatomic) NSNumber *locateFrom;
@property (nonatomic) BOOL locateItemAvailable;
@property (nonatomic) BOOL forwardHasMore;
@property (retain, nonatomic) NSNumber *locateItemCursor;
@property (retain, nonatomic) NSNumber *postSerialStyle;
@property (retain, nonatomic) NSNumber *waterFallCardStyle;
@property (retain, nonatomic) AWECodeGenNotLoginModuleModel *notLoginModel;
@property (retain, nonatomic) AWECodeGenPostRecommendModuleModel *postRecommendModel;

+ (id)awemesJSONTransformer;
+ (id)getAwemeListWithArrayJson:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
