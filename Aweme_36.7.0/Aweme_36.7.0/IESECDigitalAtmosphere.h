@class NSString, IESECAtmosphereData;

@interface IESECDigitalAtmosphere : GPBMessage

@property (copy, nonatomic) NSString *frequencyKey;
@property (nonatomic) long long frequencyCount;
@property (retain, nonatomic) IESECAtmosphereData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
