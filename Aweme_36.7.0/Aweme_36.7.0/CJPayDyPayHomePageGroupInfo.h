@class NSString, NSArray;
@protocol CJPaySubPayTypeGroupInfo;

@interface CJPayDyPayHomePageGroupInfo : JSONModel

@property (copy, nonatomic) NSString *foldDescribe;
@property (copy, nonatomic) NSArray<CJPaySubPayTypeGroupInfo> *subPayTypeGroupInfoList;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
