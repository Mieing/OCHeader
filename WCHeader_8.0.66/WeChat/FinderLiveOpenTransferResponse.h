@class NSData, NSString, BaseResponse;

@interface FinderLiveOpenTransferResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *respBuffer;
@property (retain, nonatomic) NSString *respJson;

+ (void)initialize;

@end
