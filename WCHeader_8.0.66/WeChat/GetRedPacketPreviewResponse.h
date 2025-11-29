@class NSMutableArray, BaseResponse;

@interface GetRedPacketPreviewResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *msg;

+ (void)initialize;

@end
