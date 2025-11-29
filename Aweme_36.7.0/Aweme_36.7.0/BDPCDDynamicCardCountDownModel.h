@class NSString;

@interface BDPCDDynamicCardCountDownModel : BDPCDDynamicCardAtomicModel

@property (nonatomic) long long fontSize;
@property (nonatomic) long long numberFontWeight;
@property (copy, nonatomic) NSString *numberColor;
@property (nonatomic) long long textFontWeight;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) long long deadline;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
