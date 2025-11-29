@class NSString, IESECLiveGoodsPriceDescRegularPrice, IESECLiveGoodsPriceDescText, IESECLiveGoodsPriceDescExclusive;

@interface IESECLiveGoodsPriceDesc : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long descType;
@property (retain, nonatomic) IESECLiveGoodsPriceDescText *text;
@property (retain, nonatomic) IESECLiveGoodsPriceDescRegularPrice *regularPrice;
@property (retain, nonatomic) IESECLiveGoodsPriceDescExclusive *exclusive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
