@class CContact, NSString, CMessageWrap, WXMediaInternalMessage;

@interface OpenApiAppMsgContext : NSObject

@property (retain, nonatomic) CMessageWrap *msgWrap;
@property (retain, nonatomic) CContact *contact;
@property (retain, nonatomic) WXMediaInternalMessage *mediaMessage;
@property (retain, nonatomic) NSString *fromAppId;
@property (copy, nonatomic) id /* block */ handleCallback;
@property (copy, nonatomic) id /* block */ genCallback;
@property (nonatomic) BOOL appBrandWithShareTicket;

- (void).cxx_destruct;

@end
