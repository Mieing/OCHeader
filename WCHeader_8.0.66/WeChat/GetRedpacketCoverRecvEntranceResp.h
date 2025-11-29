@class NSString, BaseResponse;

@interface GetRedpacketCoverRecvEntranceResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) BOOL showEntrance;
@property (retain, nonatomic) NSString *entranceUrl;
@property (nonatomic) unsigned int reqIntervalSecond;
@property (retain, nonatomic) NSString *emoticonPrize;

+ (void)initialize;

@end
