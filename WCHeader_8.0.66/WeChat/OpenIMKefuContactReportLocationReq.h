@class NSString;

@interface OpenIMKefuContactReportLocationReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *kfUsername;
@property (retain, nonatomic) NSString *locationType;
@property (nonatomic) double longitude;
@property (nonatomic) double latitude;
@property (nonatomic) double accuracy;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
