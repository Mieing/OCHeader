@class NSDictionary, NSArray;
@protocol IESECListCardsContextDelegate;

@interface IESECLynxCardPreloaderModel : IESECListKitCardPreloaderModel

@property (copy, nonatomic) NSDictionary *globalProps;
@property (copy, nonatomic) NSDictionary *rootGlobalProps;
@property (nonatomic) BOOL useForest;
@property (nonatomic) long long threadStrategy;
@property (retain, nonatomic) NSArray *bridgeInstances;
@property (retain, nonatomic) NSArray *xbridgeInstances;
@property (weak, nonatomic) id<IESECListCardsContextDelegate> listCardsContextDelegate;

- (void).cxx_destruct;

@end
