@class BaseRequest, NSString;

@interface ReportLocationReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) double longitude;
@property (nonatomic) double latitude;
@property (nonatomic) unsigned int reportScene;
@property (retain, nonatomic) NSString *cardTpId;
@property (retain, nonatomic) NSString *cardId;

+ (void)initialize;

@end
