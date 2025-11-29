@class AWEIMMixImageMessage, NSDictionary, NSArray, AWEIMImageWaterFallUIConfig, NSString;

@interface AWEIMImageWaterFallOngoingMixDetailViewModel : NSObject <AWEIMImageWaterFallProtocol>

@property (retain, nonatomic) AWEIMMixImageMessage *message;
@property (copy, nonatomic) NSDictionary *trackExtra;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) AWEIMImageWaterFallUIConfig *uiConfig;
@property (readonly, copy, nonatomic) NSString *mainImageName;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (readonly, copy, nonatomic) NSString *noticeText;
@property (copy, nonatomic) NSString *buttonText;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL shouldDismiss;
@property (nonatomic) BOOL scrollEnabled;
@property (copy, nonatomic) id /* block */ commitActionBlock;
@property (copy, nonatomic) id /* block */ autoDismissBlock;
@property (copy, nonatomic) id /* block */ groupActionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConv:(id)a0 mixImageMessage:(id)a1 trackExtra:(id)a2;
- (void)p_trackPageEventWithActionType:(id)a0 clickType:(id)a1;
- (void)imageWaterFallPageDidLoad;
- (void)imageWaterFallPageDidDismissByAction:(long long)a0;
- (BOOL)needAutoAdaptScroll;
- (void)p_configWithConv:(id)a0 mixImageMessage:(id)a1 trackExtra:(id)a2;
- (void)p_configPageTextWithMessage:(id)a0 conType:(unsigned long long)a1;
- (void)p_commitWithConv:(id)a0 mixImageMessage:(id)a1;
- (void)p_updateItemsWithConv:(id)a0 mixImageMessage:(id)a1;
- (void)p_updateUIConfigWithConv:(id)a0;
- (void).cxx_destruct;

@end
