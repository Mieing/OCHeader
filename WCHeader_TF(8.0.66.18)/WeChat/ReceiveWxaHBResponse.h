@class NSString, NSData, BaseResponse;

@interface ReceiveWxaHBResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int wxahbStatus;
@property (retain, nonatomic) NSString *wishing;
@property (retain, nonatomic) NSString *sendNickname;
@property (retain, nonatomic) NSString *sendHeadimg;
@property (retain, nonatomic) NSData *signature;
@property (nonatomic) int hbStatus;
@property (nonatomic) int receiveStatus;
@property (nonatomic) int isSender;
@property (nonatomic) int hbType;
@property (retain, nonatomic) NSString *tips;
@property (retain, nonatomic) NSString *errorwording;
@property (retain, nonatomic) NSString *sendUsername;

+ (void)initialize;

@end
