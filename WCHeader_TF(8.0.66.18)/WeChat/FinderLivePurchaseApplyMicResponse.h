@class NSString, FinderLiveErrorPage, NSData, BaseResponse;

@interface FinderLivePurchaseApplyMicResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *prepareBuffer;
@property (retain, nonatomic) NSString *realnameUrl;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) FinderLiveErrorPage *errPage;

+ (void)initialize;

@end
