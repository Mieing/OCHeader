@class NSString, BaseResponse;

@interface BuildRelationSessionResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *sessionCode;
@property (retain, nonatomic) NSString *ilinkIotUserId;
@property (nonatomic) unsigned int expiresIn;
@property (nonatomic) unsigned int relationType;
@property (retain, nonatomic) NSString *ilinkImSdkId;

+ (void)initialize;

@end
