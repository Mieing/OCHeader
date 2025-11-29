@class BaseRequest, NSString;

@interface GetTwistCardStatusReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *uxinfo;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *cardId;
@property (nonatomic) unsigned int cardType;
@property (retain, nonatomic) NSString *giveCardId;
@property (retain, nonatomic) NSString *canvasId;
@property (nonatomic) unsigned int opType;
@property (retain, nonatomic) NSString *pageId;

+ (void)initialize;

@end
