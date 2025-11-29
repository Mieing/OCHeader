@class NSString, NSArray;

@interface CJPaySubPayTypeGroupInfo : JSONModel

@property (copy, nonatomic) NSString *groupType;
@property (copy, nonatomic) NSString *groupTitle;
@property (copy, nonatomic) NSString *creditPayDesc;
@property (nonatomic) long long displayNewBankCardCount;
@property (copy, nonatomic) NSString *addBankCardFoldDesc;
@property (copy, nonatomic) NSArray *subPayTypeIndexList;
@property (copy, nonatomic) NSString *bankCardFoldDesc;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (BOOL)isFoldStatus;
- (void).cxx_destruct;

@end
