@class NSString, IESECCollectRequest;
@protocol YataInstanceInterface;

@interface IESECCollectContext : NSObject <IESECYataBaseViewControllerConfig>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *sessionID;
@property (retain, nonatomic) IESECCollectRequest *request;
@property (weak, nonatomic) id<YataInstanceInterface> yataInstance;

- (id)sourceBtmToken;
- (id)bizCode;
- (BOOL)enableLoadMore;
- (id)pageBTM;
- (BOOL)enableRecommend;
- (id)preloadTemplateList;
- (BOOL)adaptDarkTheme;
- (void).cxx_destruct;
- (id)init;

@end
