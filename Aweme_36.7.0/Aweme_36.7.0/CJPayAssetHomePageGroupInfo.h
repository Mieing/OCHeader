@class NSString, NSArray;

@interface CJPayAssetHomePageGroupInfo : JSONModel

@property (copy, nonatomic) NSString *foldDescribe;
@property (nonatomic) long long displayCount;
@property (copy, nonatomic) NSArray *homePageGroupInfoList;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (Class)classForCollectionProperty:(id)a0;

- (void).cxx_destruct;

@end
