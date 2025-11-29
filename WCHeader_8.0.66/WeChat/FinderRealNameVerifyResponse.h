@class FinderLiveErrorPage, NSString, FinderRealNameVerifyPrepareInfo, BaseResponse;

@interface FinderRealNameVerifyResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderRealNameVerifyPrepareInfo *prepareInfo;
@property (nonatomic) unsigned int lastVerifyResult;
@property (retain, nonatomic) FinderLiveErrorPage *errPage;
@property (retain, nonatomic) NSString *verifyUrl;
@property (nonatomic) unsigned int needFaceVerify;
@property (retain, nonatomic) NSString *faceVerifyUrl;

+ (void)initialize;

@end
