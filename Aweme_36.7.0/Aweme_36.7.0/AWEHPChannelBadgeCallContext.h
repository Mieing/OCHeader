@class NSDictionary, NSString;
@protocol AWEHPChannelBadgeModelProtocol;

@interface AWEHPChannelBadgeCallContext : AWEHPComponentBaseCallContext <AWEHPChannelBadgeCallContextProtocol>

@property (copy, nonatomic) id<AWEHPChannelBadgeModelProtocol> badgeModel;
@property (copy, nonatomic) id<AWEHPChannelBadgeModelProtocol> originBadgeModel;
@property (nonatomic) long long badgeShowResult;
@property (nonatomic) long long badgeDowngradeType;
@property (nonatomic) long long badgeHideType;
@property (nonatomic) BOOL isReuse;
@property (copy, nonatomic) NSDictionary *badgeJumpTrackParams;
@property (readonly, copy, nonatomic) NSString *componentID;
@property (readonly, copy, nonatomic) NSString *componentType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
