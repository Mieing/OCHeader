@class NSString, UIImage, AWEShareWayConfigModel, AWEShareContext;
@protocol AWEShareView, AWEShareChannelConfigProtocol;

@interface AWEShareBaseChannel : NSObject <AWEShareChannel>

@property (readonly, weak, nonatomic) AWEShareContext *context;
@property (weak, nonatomic) id<AWEShareView> shareView;
@property (readonly, copy, nonatomic) NSString *trackingLabel;
@property (readonly, nonatomic) unsigned long long shareItemStyle;
@property (readonly, copy, nonatomic) NSString *shareTitle;
@property (readonly, nonatomic) UIImage *shareImage;
@property (readonly, nonatomic) UIImage *bottomCenterImage;
@property (readonly, nonatomic, getter=isShareItemEnabled) BOOL shareItemEnabled;
@property (copy, nonatomic) id /* block */ willDismissHandler;
@property (readonly, copy, nonatomic) NSString *shareType;
@property (readonly, nonatomic) long long shareCategory;
@property (retain, nonatomic) AWEShareWayConfigModel *configModel;
@property (retain, nonatomic) id<AWEShareChannelConfigProtocol> configDelegate;
@property (readonly, nonatomic) BOOL supportMultipleOperations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)shareWithCompletion:(id /* block */)a0;
- (id)makeItemWithStyle:(unsigned long long)a0 inView:(id)a1;
- (BOOL)prepareToShare;
- (void)checkTargetIndexWithContext:(id)a0;
- (id)shareTitleWithScene:(id)a0;
- (BOOL)supportMultipleOperationsWithContext:(id)a0;
- (id)shareImageWithScene:(id)a0;
- (void).cxx_destruct;
- (BOOL)share;
- (BOOL)prepareWithContext:(id)a0;

@end
