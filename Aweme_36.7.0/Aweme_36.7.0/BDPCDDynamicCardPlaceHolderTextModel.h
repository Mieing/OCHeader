@class NSString, NSArray, BDPCDDynamicCardPlaceHolderSuffixContentModel;

@interface BDPCDDynamicCardPlaceHolderTextModel : BDPCDDynamicCardAtomicModel

@property (nonatomic) long long alignType;
@property (nonatomic) long long maxLine;
@property (nonatomic) double fontSize;
@property (nonatomic) double fontWeight;
@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSArray *textContentArr;
@property (retain, nonatomic) BDPCDDynamicCardPlaceHolderSuffixContentModel *suffixContent;
@property (nonatomic) BOOL adjustWidth;
@property (nonatomic) BOOL transformEmoji;

- (id)generateTextContentArrWithTextContentPraseResult:(id)a0 placeholderArr:(id)a1;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
