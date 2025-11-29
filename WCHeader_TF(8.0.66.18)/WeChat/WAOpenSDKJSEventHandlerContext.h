@class WAOpenSDKTransferContext, NSString, WAContact, UIViewController;
@protocol WAOpenSDKQRCodeHandlerDelegate, MMUIViewControllerDelegate;

@interface WAOpenSDKJSEventHandlerContext : NSObject

@property (retain, nonatomic) WAContact *contact;
@property (copy, nonatomic) NSString *sourceUserName;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *sourcePagePath;
@property (copy, nonatomic) NSString *sourcePagePathQuery;
@property (nonatomic) unsigned long long sourceScene;
@property (copy, nonatomic) NSString *sourceSceneNote;
@property (weak, nonatomic) UIViewController<MMUIViewControllerDelegate> *sourceViewController;
@property (copy, nonatomic) NSString *sourceOpenSDKAppId;
@property (copy, nonatomic) NSString *sourceOpenSDKUniversalLink;
@property (copy, nonatomic) NSString *sourceInstanceId;
@property (copy, nonatomic) NSString *sourceSessionId;
@property (nonatomic) unsigned long long sourceVersion;
@property (nonatomic) unsigned int sourceDebugMode;
@property (copy, nonatomic) NSString *sourceTitle;
@property (copy, nonatomic) id /* block */ eventCompletionBlock;
@property (copy, nonatomic) NSString *qrCodeUuid;
@property (copy, nonatomic) NSString *ticket;
@property (copy, nonatomic) NSString *jsapiType;
@property (nonatomic) BOOL disableAutoCloseWebviewForQRCode;
@property (weak, nonatomic) id<WAOpenSDKQRCodeHandlerDelegate> openSDKQRCodeDelegate;
@property (retain, nonatomic) WAOpenSDKTransferContext *transferContext;

- (id)init;
- (void).cxx_destruct;

@end
