@class WxaAppBaseResponse, NSString, BaseResponse;

@interface CheckDemoInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) WxaAppBaseResponse *wxaappBaseresponse;
@property (nonatomic) BOOL hasNewDemo;
@property (retain, nonatomic) NSString *newDemoDownloadUrl;
@property (retain, nonatomic) NSString *newDemoMd5;
@property (nonatomic) BOOL hasNewDemoPage;
@property (retain, nonatomic) NSString *newDemoPageDownloadUrl;
@property (retain, nonatomic) NSString *newDemoPageMd5;
@property (retain, nonatomic) NSString *newDemoCodeExtJsonInfo;
@property (retain, nonatomic) NSString *applyExprPage;

+ (void)initialize;

@end
