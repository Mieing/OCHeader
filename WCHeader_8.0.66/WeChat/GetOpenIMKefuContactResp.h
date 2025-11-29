@class NSString, OpenIMKefuContact, OpenIMKefuContext, BaseResponse;

@interface GetOpenIMKefuContactResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) OpenIMKefuContact *contact;
@property (nonatomic) unsigned int confirmType;
@property (retain, nonatomic) NSString *antispamTips;
@property (retain, nonatomic) OpenIMKefuContext *context;

+ (void)initialize;

@end
