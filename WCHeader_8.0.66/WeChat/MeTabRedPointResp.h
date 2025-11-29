@class IamBizBaseRequest, NSData, MeTabRegisterNoticeInfo;

@interface MeTabRedPointResp : WXPBGeneratedMessage

@property (retain, nonatomic) IamBizBaseRequest *baseResponse;
@property (retain, nonatomic) NSData *ctrlInfo;
@property (retain, nonatomic) MeTabRegisterNoticeInfo *registerNotice;

+ (void)initialize;

@end
