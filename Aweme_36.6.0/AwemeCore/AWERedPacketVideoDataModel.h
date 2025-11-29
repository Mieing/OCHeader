@class NSString, NSArray;

@interface AWERedPacketVideoDataModel : AWELiteBaseApiModel

@property (copy, nonatomic) NSString *headText;
@property (copy, nonatomic) NSString *leftText;
@property (copy, nonatomic) NSString *rightText;
@property (copy, nonatomic) NSString *middleText;
@property (copy, nonatomic) NSString *buttonText;
@property (nonatomic) long long modelType;
@property (nonatomic) long long buttonType;
@property (nonatomic) long long popupType;
@property (copy, nonatomic) NSString *buttonSchema;
@property (nonatomic) long long totalNum;
@property (copy, nonatomic) NSString *footText;
@property (copy, nonatomic) NSString *footSchema;
@property (copy, nonatomic) NSString *v2HeadText;
@property (copy, nonatomic) NSArray *emojiList;
@property (copy, nonatomic) NSString *descText;
@property (copy, nonatomic) NSString *taskKey;
@property (nonatomic) unsigned long long userStatus;

+ (id)emojiListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
