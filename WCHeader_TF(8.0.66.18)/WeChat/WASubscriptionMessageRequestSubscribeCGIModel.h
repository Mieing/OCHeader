@class WASubscriptionMessagePageSheetViewModel, NSString;

@interface WASubscriptionMessageRequestSubscribeCGIModel : NSObject

@property (retain, nonatomic) WASubscriptionMessagePageSheetViewModel *viewModel;
@property (copy, nonatomic) NSString *username;
@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSString *appid;
@property (nonatomic) unsigned int popupScene;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *extInfo;

- (void).cxx_destruct;

@end
