@class NSString, AWEShareContext;
@protocol AWEShareView;

@interface AWEShareGroupQRCodeFunction : NSObject <AWEShareFunction>

@property (nonatomic) BOOL usesTikCode;
@property (copy, nonatomic) NSString *shareType;
@property (weak, nonatomic) AWEShareContext *context;
@property (weak, nonatomic) id<AWEShareView> shareView;
@property (nonatomic) long long shareCategory;
@property (nonatomic) BOOL supportMultipleOperations;
@property (readonly, copy, nonatomic) NSString *trackingLabel;
@property (readonly, nonatomic, getter=isShareItemEnabled) BOOL shareItemEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)shareWithCompletion:(id /* block */)a0;
- (void)configWithShareView:(id)a0;
- (id)defaultSmallIconInTheme:(id)a0;
- (id)defaultSmallIconBackgroundColorInTheme:(id)a0;
- (void)executeFunctionOperationWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)title;
- (BOOL)prepareWithContext:(id)a0;
- (id)defaultIcon;

@end
