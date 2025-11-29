@class NSString, NSArray, NSDictionary, CJPayCommonRecIconInfo;

@interface CJPayCommonRecInfoExt : JSONModel

@property (copy, nonatomic) NSString *titleArrayStr;
@property (copy, nonatomic) NSString *showRulesStr;
@property (copy, nonatomic) NSString *isChooseStr;
@property (copy, nonatomic) NSString *fundIndex2ProtoNameDictStr;
@property (copy, nonatomic) NSString *fundIndex2ProtoInfoDictStr;
@property (copy, nonatomic) NSString *protoNameDictStr;
@property (copy, nonatomic) NSString *protoInfoArrayStr;
@property (copy, nonatomic) NSString *iconInfoStr;
@property (readonly, nonatomic) BOOL isChoose;
@property (copy, nonatomic) NSString *recImageUrlStr;
@property (copy, nonatomic) NSArray *titleComponentArray;
@property (copy, nonatomic) NSString *subTitleStr;
@property (copy, nonatomic) NSDictionary *showRulesDict;
@property (retain, nonatomic) CJPayCommonRecIconInfo *iconInfo;
@property (copy, nonatomic) NSArray *protoInfoArray;
@property (copy, nonatomic) NSDictionary *protoNameDict;
@property (copy, nonatomic) NSDictionary *fundIndex2ProtoNameDict;
@property (copy, nonatomic) NSDictionary *fundIndex2ProtoInfoDict;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;
- (id)trackTitle;

@end
