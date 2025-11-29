@class NSDictionary, IESECBTMModel;

@interface IESECLiveEditCartResultTrackInfo : NSObject

@property (nonatomic) BOOL isAddCart;
@property (retain, nonatomic) IESECBTMModel *btmModel;
@property (retain, nonatomic) NSDictionary *basicTrackParams;
@property (retain, nonatomic) NSDictionary *cartTrackParamsFinal;

- (void).cxx_destruct;

@end
