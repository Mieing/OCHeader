@class NSString;
@protocol AWEHPChannelEditAbilityImpl;

@interface AWEHPChannelEditAbilityImpl : AWEHPChannelBaseAbilityImpl <AWEHPChannelEditAbility>

@property (weak, nonatomic) id<AWEHPChannelEditAbilityImpl> target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showPinTopComponentWithModel:(id)a0 showResult:(id /* block */)a1 pinTopCompletion:(id /* block */)a2;
- (void)showCommonPinTopComponentWithShowResult:(id /* block */)a0 pinTopCompletion:(id /* block */)a1 source:(id)a2;
- (void)generatePinTopTaskWithModel:(id)a0 completion:(id /* block */)a1;
- (void)canShowPinTopComponentWithShowResult:(id /* block */)a0;
- (void).cxx_destruct;

@end
