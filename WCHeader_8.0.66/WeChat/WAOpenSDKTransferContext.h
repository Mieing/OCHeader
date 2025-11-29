@class NSString, NSObject;
@protocol OS_dispatch_group;

@interface WAOpenSDKTransferContext : NSObject

@property (nonatomic) BOOL sendReqBeforeEnd;
@property int errorCode;
@property (copy) NSString *errorMessage;
@property (retain) NSObject<OS_dispatch_group> *group;

- (void)addUpdateDeepLinkRequestWithTicket:(id)a0 result:(id)a1 context:(id)a2;
- (void)addSendLaunchWxaRedirectingPageRespWithTicket:(id)a0 appID:(id)a1 universalLink:(id)a2 context:(id)a3 beforeCallback:(id /* block */)a4 afterCallback:(id /* block */)a5;
- (void).cxx_destruct;

@end
