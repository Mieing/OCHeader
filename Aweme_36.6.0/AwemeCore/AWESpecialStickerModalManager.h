@class AWEWebViewController, NSString, UIView;
@protocol AWESpecialStickerModalManagerDelegate;

@interface AWESpecialStickerModalManager : NSObject <AWESpecialStickerModalManagerProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWEWebViewController *webViewController;
@property (nonatomic) BOOL webViewLoadSuccess;
@property (copy, nonatomic) NSString *URL;
@property (weak, nonatomic) id<AWESpecialStickerModalManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearWebViewIfNeeded;
- (void)webViewDidFinishNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)dismissNotification:(id)a0;

@end
