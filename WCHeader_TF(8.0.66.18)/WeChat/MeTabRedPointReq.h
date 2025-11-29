@class IamBizBaseRequest, NSString, NSData;

@interface MeTabRedPointReq : WXPBGeneratedMessage

@property (retain, nonatomic) IamBizBaseRequest *baseRequest;
@property (retain, nonatomic) NSString *biz;
@property (retain, nonatomic) NSData *ctrlInfo;
@property (nonatomic) BOOL read;

+ (void)initialize;

@end
