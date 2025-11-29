@class NSString, NSArray;

@interface IESECSKUTradeModel : IESECBaseApiModel

@property (nonatomic) long long tradeType;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *subContent;
@property (copy, nonatomic) NSString *cornernText;
@property (nonatomic) long long benefitType;
@property (copy, nonatomic) NSArray *tradeButtons;
@property (nonatomic) BOOL select;

+ (id)tradeButtonsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
