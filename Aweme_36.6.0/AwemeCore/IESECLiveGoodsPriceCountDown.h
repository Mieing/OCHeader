@class NSString, IESECLiveConfigCountDownModel;

@interface IESECLiveGoodsPriceCountDown : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECLiveConfigCountDownModel *countDown;
@property (copy, nonatomic) NSString *fallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
