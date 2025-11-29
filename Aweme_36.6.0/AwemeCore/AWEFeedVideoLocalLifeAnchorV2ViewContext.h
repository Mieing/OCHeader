@class NSString, NSDictionary, AWEAwemeModel, UIResponder;

@interface AWEFeedVideoLocalLifeAnchorV2ViewContext : NSObject

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) long long scene;
@property (copy, nonatomic) NSString *enterMethod;
@property (weak, nonatomic) id player;
@property (copy, nonatomic) NSDictionary *contextDict;
@property (weak, nonatomic) id poiPlayInteractionVCManager;
@property (readonly, copy, nonatomic) NSDictionary *logExtra;
@property (weak, nonatomic) UIResponder *btmResponder;
@property (copy, nonatomic) NSString *btm;
@property (copy, nonatomic) NSString *btmStandData;
@property (nonatomic) BOOL fromNearbyBigCard;
@property (copy, nonatomic) NSDictionary *nearbyBigCardContext;

- (id)initCommentViewContext;
- (id)exhcangeToOldViewViewContext;
- (void).cxx_destruct;
- (id)initWithBuilder:(id)a0;

@end
