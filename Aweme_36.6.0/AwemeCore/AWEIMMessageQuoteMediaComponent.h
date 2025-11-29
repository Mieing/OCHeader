@class AWEIMMessage, NSString;
@protocol AWEIMMessageQuoteDataInterface;

@interface AWEIMMessageQuoteMediaComponent : AWEIMFlexComponent <AWEIMMessageQuoteDataAction, AWEIMMessageQuoteMediaInterface>

@property (weak, nonatomic) id<AWEIMMessageQuoteDataInterface> quoteDataProvider;
@property (readonly, nonatomic) AWEIMMessage *currentMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)p_createPresenter;
- (void)didLoadFullOriginMessage:(id)a0 messageStatus:(int)a1;
- (void)didChangeInvisibleStatus:(BOOL)a0 invisibleString:(id)a1;
- (id)tapTransitionFromView;
- (void)refreshWithUrlModel:(id)a0 image:(id)a1 type:(long long)a2;
- (void)p_refreshQuotedCoverWithMessage:(id)a0;
- (void).cxx_destruct;

@end
