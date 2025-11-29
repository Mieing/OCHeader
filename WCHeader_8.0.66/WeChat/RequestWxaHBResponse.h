@class NSString, BaseResponse;

@interface RequestWxaHBResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *reqkey;
@property (retain, nonatomic) NSString *sendid;
@property (nonatomic) unsigned int pollingTimesPerSecond;
@property (nonatomic) unsigned int pollingTotalSeconds;
@property (nonatomic) unsigned int wxahbStatus;
@property (retain, nonatomic) NSString *errorwording;

+ (void)initialize;

@end
