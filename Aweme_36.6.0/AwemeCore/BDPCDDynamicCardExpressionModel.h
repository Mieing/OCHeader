@class NSString;

@interface BDPCDDynamicCardExpressionModel : BDPCDDynamicCardSupportableValueModel

@property (copy, nonatomic) NSString *expression;
@property (retain, nonatomic) id fallback;

- (void).cxx_destruct;

@end
