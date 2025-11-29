@class NSString, NSDictionary, AWEAwemeModel;
@protocol AWEPOIPlayInteractionVCManagerProtocol;

@interface AWELocalLifeAnchorModel : NSObject

@property (readonly, nonatomic) AWEAwemeModel *aweme;
@property (readonly, copy, nonatomic) NSString *referString;
@property (readonly, weak, nonatomic) id<AWEPOIPlayInteractionVCManagerProtocol> playerManager;
@property (readonly, nonatomic) long long scene;
@property (readonly, copy, nonatomic) NSDictionary *logExtra;

+ (id)builderWithAweme:(id)a0 referString:(id)a1;
+ (id)builder;

- (void).cxx_destruct;
- (id)initWithBuilder:(id)a0;

@end
