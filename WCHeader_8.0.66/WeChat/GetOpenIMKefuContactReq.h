@class GetOpenIMKefuContactContext, NSString, NSData, GetOpenIMKefuContactClientStatus;

@interface GetOpenIMKefuContactReq : WXPBGeneratedMessage

@property (retain, nonatomic) GetOpenIMKefuContactContext *context;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) GetOpenIMKefuContactClientStatus *clientStatus;
@property (retain, nonatomic) NSData *spamContext;
@property (retain, nonatomic) NSString *finderContext;

+ (void)initialize;

@end
