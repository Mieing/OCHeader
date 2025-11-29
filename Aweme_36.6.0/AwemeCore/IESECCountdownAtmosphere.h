@class IESECAtmosphereData;

@interface IESECCountdownAtmosphere : GPBMessage

@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (retain, nonatomic) IESECAtmosphereData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
