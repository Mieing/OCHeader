@class AWEIMMessage, NSString, UIImage, AWEIMMessageViewModel;

@interface AWEIMExchangeMessageQuotedBizComponent : AWEIMFlexComponent <AWEIMMessageQuoteDataAction, AWEIMMessageUpateMessage, AWEIMGroupExchangeDataMessage>

@property (nonatomic) BOOL showMosaic;
@property (nonatomic) long long lastExchangeResponseSeverMessageId;
@property (retain, nonatomic) AWEIMMessage *originMessage;
@property (retain, nonatomic) AWEIMMessageViewModel *originMessageViewModel;
@property (retain, nonatomic) UIImage *mosaicImage;
@property (retain, nonatomic) UIImage *realImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)didUpdateBatchInfoList:(id)a0 batchIDs:(id)a1 source:(unsigned long long)a2;
- (void)didLoadFullOriginMessage:(id)a0 messageStatus:(int)a1;
- (void)didUpdateExchangeMessage:(id)a0 inConversation:(id)a1;
- (void)p_tryLoadRealImage:(id /* block */)a0;
- (void)updateWithShowMosaic:(BOOL)a0 enableAnimation:(BOOL)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
