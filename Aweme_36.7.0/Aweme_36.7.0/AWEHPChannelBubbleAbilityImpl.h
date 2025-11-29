@class NSString;
@protocol AWEHPChannelBubbleAbilityImpl;

@interface AWEHPChannelBubbleAbilityImpl : AWEHPChannelBaseAbilityImpl <AWEHPChannelBubbleAbility>

@property (weak, nonatomic) id<AWEHPChannelBubbleAbilityImpl> target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
