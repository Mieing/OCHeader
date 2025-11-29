@class NSString, NSArray;

@interface CJPayFreqSuggestStyleInfo : JSONModel

@property (nonatomic) BOOL hasSuggestCard;
@property (copy, nonatomic) NSString *titleButtonLabel;
@property (copy, nonatomic) NSString *tradeConfirmButtonLabel;
@property (copy, nonatomic) NSArray *freqSuggestStyleIndexList;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
