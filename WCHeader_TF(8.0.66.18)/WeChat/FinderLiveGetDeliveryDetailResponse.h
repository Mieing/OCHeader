@class NSData, BaseResponse;

@interface FinderLiveGetDeliveryDetailResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int cmdId;
@property (retain, nonatomic) NSData *respBuffer;

+ (void)initialize;

@end
