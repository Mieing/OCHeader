@class NSString, AWEAwemeModel;
@protocol AWEAdRichAwemeStatusProtocol;

@interface AWECommerceAdRichAwemeManager : NSObject <AWECommerceAdRichAwemeManager>

@property (weak, nonatomic) id<AWEAdRichAwemeStatusProtocol> statusManager;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)feedCanAutoPlayWithPresentedViewController:(id)a0;
+ (unsigned long long)albumSlideAutoReplayInAdRichAweme:(id)a0;
+ (Class)aAWECommerceAdRichAwemeManagerCommonAdapterClass;
+ (Class)aAWECommerceAdRichAwemeManagerDOUYINLiteAdapterClass;

- (void)enterWithInteractionViewController:(id)a0 model:(id)a1;
- (BOOL)isRichAwemeManuallySlide:(unsigned long long)a0;
- (id)aAWECommerceAdRichAwemeManagerCommonAdapter;
- (id)aAWECommerceAdRichAwemeManagerDOUYINLiteAdapter;
- (void).cxx_destruct;
- (void)pause;
- (void)leave;
- (void)resume;

@end
