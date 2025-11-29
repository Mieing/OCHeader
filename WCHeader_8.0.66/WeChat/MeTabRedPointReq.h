@class MeTabRegisterNoticeInfo, NSString, NSData, IamBizBaseRequest;

@interface MeTabRedPointReq : WXPBGeneratedMessage

@property (retain, nonatomic) IamBizBaseRequest *baseRequest;
@property (retain, nonatomic) NSString *biz;
@property (retain, nonatomic) NSData *ctrlInfo;
@property (nonatomic) BOOL read;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) MeTabRegisterNoticeInfo *registerNotice;

+ (void)initialize;

@end
