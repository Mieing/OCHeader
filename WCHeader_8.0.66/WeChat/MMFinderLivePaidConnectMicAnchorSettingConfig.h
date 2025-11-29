@class NSArray;

@interface MMFinderLivePaidConnectMicAnchorSettingConfig : NSObject

@property (retain, nonatomic) NSArray *availableConnectDurations;
@property (retain, nonatomic) NSArray *disconnectOptions;
@property (retain, nonatomic) NSArray *availableConnectPrices;
@property (retain, nonatomic) NSArray *availableBidPrices;

+ (id)fromPurchaseConfig:(id)a0;

- (void).cxx_destruct;

@end
