@class NSString, AWEPlayInteractionContext;

@interface AWEPlayInteractionNearbyFollowGuideViewModel : NSObject

@property (retain, nonatomic) AWEPlayInteractionContext *context;
@property (readonly, copy, nonatomic) NSString *followText;

- (void)trackShowEvent;
- (void)followVideoAuthorWithCompletion:(id /* block */)a0;
- (void)trackFollowEvent;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
