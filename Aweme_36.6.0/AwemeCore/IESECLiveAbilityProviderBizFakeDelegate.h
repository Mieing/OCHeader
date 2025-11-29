@class NSString;
@protocol AWEECLiveAbilityProviderBizDelegate;

@interface IESECLiveAbilityProviderBizFakeDelegate : NSObject <IESECLiveAbilityProviderBizDelegate>

@property (retain, nonatomic) id<AWEECLiveAbilityProviderBizDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)roomID;

@end
