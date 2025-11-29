@class NSString, AddOpenIMKefuContactContext, NSData;

@interface AddOpenIMKefuContactReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *kfUsername;
@property (retain, nonatomic) AddOpenIMKefuContactContext *context;
@property (retain, nonatomic) NSData *spamContext;
@property (retain, nonatomic) NSString *finderContext;

+ (void)initialize;

@end
