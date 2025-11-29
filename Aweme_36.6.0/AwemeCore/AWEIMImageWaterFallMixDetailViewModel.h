@class AWEIMMixImageMessage, NSDictionary, NSArray, AWEIMImageWaterFallUIConfig, NSString;

@interface AWEIMImageWaterFallMixDetailViewModel : NSObject <AWEIMImageWaterFallProtocol>

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

- (void)p_configWithMessage:(id)a0 trackExtra:(id)a1;
- (void)p_trackPageEventWithActionType:(id)a0 clickType:(id)a1;
- (void)p_updateItemsWithMessage:(id)a0;
- (void)p_updateUIConfig;
- (void)imageWaterFallPageDidLoad;
- (void)imageWaterFallPageDidDismissByAction:(long long)a0;
- (BOOL)needAutoAdaptScroll;
- (id)initWithMessage:(id)a0 trackExtra:(id)a1;
- (void).cxx_destruct;

@end
