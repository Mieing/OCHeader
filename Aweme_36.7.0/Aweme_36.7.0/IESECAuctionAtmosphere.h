@class IESECDigitalAtmosphere, IESECCountdownAtmosphere;

@interface IESECAuctionAtmosphere : GPBMessage

@property (retain, nonatomic) IESECCountdownAtmosphere *countDown;
@property (nonatomic) BOOL hasCountDown;
@property (retain, nonatomic) IESECDigitalAtmosphere *digital;
@property (nonatomic) BOOL hasDigital;

+ (id)descriptor;

@end
