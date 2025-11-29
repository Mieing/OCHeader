@class NSString, BaseResponse;

@interface WxaTmplComplaintResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *complaintId;

+ (void)initialize;

@end
