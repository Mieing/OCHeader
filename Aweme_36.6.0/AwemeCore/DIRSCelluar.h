@class CTTelephonyNetworkInfo, NSString, NSDictionary;

@interface DIRSCelluar : NSObject

@property (retain, nonatomic) CTTelephonyNetworkInfo *telephonyNetworkInfo;
@property (copy) NSString *celluarIdeintifier;
@property long long networkType;
@property (copy) NSDictionary *carrierDictionary;
@property (copy, nonatomic) id /* block */ accessTechnologyNotifier;

+ (id)cellular;

- (void)_setupAccessTechnologyNotifiers;
- (void)_setupCarrierNotifiers;
- (void)_updateToLatest;
- (void)onAccessTechnologyDidChange;
- (void)_updateCellularIdentifier:(id)a0;
- (void)_updateCarrier:(id)a0;
- (long long)convertNetwork:(id)a0;
- (void).cxx_destruct;
- (void)commonInit;
- (id)currentRadioAccessTechnology;

@end
