@class NSURLSession, NSString, NSMutableSet, MPPageFastLoadWXPicDecoder, NSObject;
@protocol OS_dispatch_queue, MPPageFastLoadCustomSchemeHandlerDelegate;

@interface MPPageFastLoadCustomSchemeHandler : NSObject <WKURLSchemeHandler>

@property (retain, nonatomic) NSURLSession *onlineRequestSession;
@property (retain, nonatomic) NSMutableSet *activeTaskSet;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *imageDecodeQueue;
@property (retain, nonatomic) MPPageFastLoadWXPicDecoder *wxPicDecoder;
@property (weak, nonatomic) id<MPPageFastLoadCustomSchemeHandlerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)customScheme;
- (void)webView:(id)a0 startURLSchemeTask:(id)a1;
- (void)doOnlineRequest:(id)a0;
- (void)response404ForTask:(id)a0;
- (void)decodeAndFinishTask:(id)a0 imageData:(id)a1 serverContentType:(id)a2 serverResponseHeaders:(id)a3;
- (id)getImageTypeFromTask:(id)a0;
- (id)createSuccessResponseForImageData:(id)a0 contentType:(id)a1 url:(id)a2 headers:(id)a3;
- (void)webView:(id)a0 stopURLSchemeTask:(id)a1;
- (void).cxx_destruct;

@end
