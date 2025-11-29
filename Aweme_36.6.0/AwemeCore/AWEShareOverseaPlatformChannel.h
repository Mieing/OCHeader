@class NSString, AWEShareBaseChannel, AWEShareContext;
@protocol AWEShareView;

@interface AWEShareOverseaPlatformChannel : AWEShareBaseChannel <AWEShareFunction>

@property (retain, nonatomic) AWEShareBaseChannel *downloadChannel;
@property (readonly, nonatomic) long long sharePlatform;
@property (readonly, copy, nonatomic) NSString *shareType;
@property (readonly, weak, nonatomic) AWEShareContext *context;
@property (readonly, weak, nonatomic) id<AWEShareView> shareView;
@property (readonly, nonatomic) long long shareCategory;
@property (readonly, copy, nonatomic) NSString *trackingLabel;
@property (readonly, nonatomic) BOOL supportMultipleOperations;
@property (readonly, nonatomic, getter=isShareItemEnabled) BOOL shareItemEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)channelWithType:(id)a0;

- (void)shareWithCompletion:(id /* block */)a0;
- (id)shareImage;
- (void)configWithShareView:(id)a0;
- (void)precheckFunctionBeforeShareWithCompletion:(id /* block */)a0;
- (void)executeFunctionOperationWithCompletion:(id /* block */)a0;
- (BOOL)prepareToShare;
- (void)finishWithDownloadResult:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)channelConfigs;
- (void).cxx_destruct;
- (id)initWithPlatform:(long long)a0;
- (id)title;
- (id)shareTitle;
- (BOOL)prepareWithContext:(id)a0;
- (id)defaultIcon;

@end
