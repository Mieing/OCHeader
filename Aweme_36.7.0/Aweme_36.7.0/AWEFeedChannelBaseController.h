@class NSString;
@protocol AWEHPChannelPageAbility, AWEHPChannelTopBarAbility, AWEHPChannelBubbleAbility, AWEHPChannelTabItemAbility, AWEHPChannelEditAbility, AWEHPChannelControllerConfigProtocol;

@interface AWEFeedChannelBaseController : NSObject <AWEHPChannelControllerProtocol>

@property (weak, nonatomic) id<AWEHPChannelTopBarAbility> topBarAbility;
@property (weak, nonatomic) id<AWEHPChannelPageAbility> pageAbility;
@property (weak, nonatomic) id<AWEHPChannelBubbleAbility> bubbleAbility;
@property (weak, nonatomic) id<AWEHPChannelTabItemAbility> tabItemAbility;
@property (weak, nonatomic) id<AWEHPChannelEditAbility> editAbility;
@property (weak, nonatomic) id<AWEHPChannelControllerConfigProtocol> config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getContentViewController;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
