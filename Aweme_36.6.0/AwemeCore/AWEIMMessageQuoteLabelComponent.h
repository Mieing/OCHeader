@class NSString;
@protocol AWEIMMessageQuoteDataInterface;

@interface AWEIMMessageQuoteLabelComponent : AWEIMFlexComponent <AWEIMMessageQuoteDataAction, AWEIMFeedVideoMsgUnavailableStatusUpdatesObserver>

@property (copy, nonatomic) NSString *originMessageSenderName;
@property (weak, nonatomic) id<AWEIMMessageQuoteDataInterface> quoteDataProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)p_hintAttributes:(BOOL)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)p_createPresenter;
- (void)didUpdateUnavailableStatusForMessage:(id)a0;
- (void)didUpdateContentTitleForMessage:(id)a0 itemID:(id)a1;
- (void)didEditContentTitleForMessage:(id)a0;
- (void)didFetchOriginMessageSender:(id)a0;
- (void)didLoadFullOriginMessage:(id)a0 messageStatus:(int)a1;
- (void)didChangeInvisibleStatus:(BOOL)a0 invisibleString:(id)a1;
- (void)refreshQuoteLabelText:(BOOL)a0;
- (id)hintWithOriginMessage:(id)a0;
- (id)contentTitleOfPublishMessageScene:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)currentMessage;

@end
