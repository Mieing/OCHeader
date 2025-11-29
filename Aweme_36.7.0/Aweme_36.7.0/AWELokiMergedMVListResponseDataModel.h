@class NSString, AWELokiMergedMVListResponseDataInfos;

@interface AWELokiMergedMVListResponseDataModel : ACCBaseApiModel

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *regionKey;
@property (nonatomic) long long categoryID;
@property (copy, nonatomic) NSString *panelKey;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) AWELokiMergedMVListResponseDataInfos *dataInfos;

+ (id)categoriesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
