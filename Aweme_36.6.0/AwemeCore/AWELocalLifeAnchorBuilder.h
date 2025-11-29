@class NSDictionary, NSString, AWEAwemeModel;
@protocol AWEPOIPlayInteractionVCManagerProtocol;

@interface AWELocalLifeAnchorBuilder : NSObject

@property (readonly, nonatomic) AWEAwemeModel *aweme;
@property (readonly, copy, nonatomic) NSDictionary *logExtra;
@property (readonly, copy, nonatomic) NSString *referString;
@property (readonly, weak, nonatomic) id<AWEPOIPlayInteractionVCManagerProtocol> playerManager;
@property (readonly, nonatomic) long long scene;

- (id /* block */)setScene;
- (id /* block */)setPlayerManager;
- (id /* block */)setLogExtra;
- (id /* block */)setAweme;
- (id /* block */)setReferString;
- (void).cxx_destruct;
- (id)init;

@end
