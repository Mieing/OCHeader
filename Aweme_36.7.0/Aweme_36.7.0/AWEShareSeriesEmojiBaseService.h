@class NSString;

@interface AWEShareSeriesEmojiBaseService : AWEShareCommonImpl <AWEShareSeriesEmoji>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showPanelWithSeriesEmoji:(id)a0 extraLogInfo:(id)a1 onViewController:(id)a2;
- (id)showPanelWithImage:(id)a0 onViewController:(id)a1 scene:(id)a2 extraParams:(id)a3;
- (id)contextWithSeriesEmoji:(id)a0;

@end
