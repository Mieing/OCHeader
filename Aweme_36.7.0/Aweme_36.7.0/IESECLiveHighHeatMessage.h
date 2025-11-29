@class IESECRedirectData, NSString;

@interface IESECLiveHighHeatMessage : GPBMessage

@property (retain, nonatomic) IESECRedirectData *redirectData;
@property (nonatomic) BOOL hasRedirectData;
@property (copy, nonatomic) NSString *routeRule;

+ (id)descriptor;

@end
