@class BaseRequest, NSString, NSData;

@interface SprMiaoJianBgmSearchReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *keyWord;
@property (retain, nonatomic) NSData *pageCtx;

+ (void)initialize;

@end
