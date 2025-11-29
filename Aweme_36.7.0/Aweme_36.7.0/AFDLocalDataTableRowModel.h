@class AFDLocalUserModel, AFDLocalFamiliarConfidenceModel, AFDLocalPrivacyCommonModel, AFDLocalMateModel;

@interface AFDLocalDataTableRowModel : AWEBaseApiModel

@property (nonatomic) long long operationType;
@property (retain, nonatomic) AFDLocalPrivacyCommonModel *blockModel;
@property (retain, nonatomic) AFDLocalPrivacyCommonModel *reverseBlockModel;
@property (retain, nonatomic) AFDLocalPrivacyCommonModel *notShowModel;
@property (retain, nonatomic) AFDLocalPrivacyCommonModel *notOtherShowModel;
@property (retain, nonatomic) AFDLocalPrivacyCommonModel *reverseNotOtherShowModel;
@property (retain, nonatomic) AFDLocalMateModel *mateModel;
@property (retain, nonatomic) AFDLocalUserModel *userModel;
@property (retain, nonatomic) AFDLocalFamiliarConfidenceModel *familiarConfidenceModel;
@property (nonatomic) long long modifyTime;

+ (id)userModelJSONTransformer;
+ (id)propertyNameWithTableName:(id)a0;
+ (id)blockModelJSONTransformer;
+ (id)reverseBlockModelJSONTransformer;
+ (id)notShowModelJSONTransformer;
+ (id)notOtherShowModelJSONTransformer;
+ (id)reverseNotOtherShowModelJSONTransformer;
+ (id)mateModelJSONTransformer;
+ (id)familiarConfidenceModelJSONTransformer;
+ (id)rowModelFromBaseModel:(id)a0 tableName:(id)a1;
+ (id)JSONKeyPathsByPropertyKey;

- (id)originalResponseModelWithTable:(id)a0;
- (void)updateRowModelWithTable:(id)a0 type:(long long)a1;
- (void).cxx_destruct;

@end
