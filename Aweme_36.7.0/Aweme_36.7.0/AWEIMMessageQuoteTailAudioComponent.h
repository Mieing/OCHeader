@class NSString;
@protocol AWEIMMessageQuoteDataInterface;

@interface AWEIMMessageQuoteTailAudioComponent : AWEIMFlexComponent <AWEIMMessageQuoteDataAction>

@property (weak, nonatomic) id<AWEIMMessageQuoteDataInterface> quoteDataProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)p_createPresenter;
- (void)didLoadFullOriginMessage:(id)a0 messageStatus:(int)a1;
- (void)didChangeInvisibleStatus:(BOOL)a0 invisibleString:(id)a1;
- (void).cxx_destruct;

@end
