@class NSString, IESECLiveAuctionDigitalAtmosphere, IESECLiveAuctionCountdownAtmosphere;

@interface IESECLiveAuctionV2AtmosphereModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECLiveAuctionCountdownAtmosphere *countDownAtmosphere;
@property (retain, nonatomic) IESECLiveAuctionDigitalAtmosphere *digitalAtmosphere;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)genreateHotsaleInfoWithCountDown:(id)a0;
+ (id)genreateHotsaleInfoWithDigital:(id)a0;
+ (id)countDownAtmosphereJSONTransformer;
+ (id)digitalAtmosphereJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)updateAuctionV2AtmosphereWithMsg:(id)a0;
- (void).cxx_destruct;

@end
