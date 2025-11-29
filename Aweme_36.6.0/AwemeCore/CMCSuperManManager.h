@class NSString, AWEAwemeModel;
@protocol AWESuperManProtocol, AWECommerceComponentContext;

@interface CMCSuperManManager : NSObject <AWECommerceComponentProtocol, CMCBatManManagerProtocol>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) id<AWESuperManProtocol> superMan;
@property (weak, nonatomic) id<AWECommerceComponentContext> commerceContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowComponentWithContext:(id)a0;

- (void)setupBatManWithModel:(id)a0;
- (void)preloadXToken;
- (void)playBatManNotification:(id)a0;
- (void)closeBatManNotification:(id)a0;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (id)init;
- (void)addObserver;
- (void)dealloc;

@end
