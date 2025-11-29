@class NSString;
@protocol BDNativeWebMessageHandlerDelegate;

@interface BDNativeWebMessageHandler : NSObject <WKScriptMessageHandler>

@property (weak, nonatomic) id<BDNativeWebMessageHandlerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
