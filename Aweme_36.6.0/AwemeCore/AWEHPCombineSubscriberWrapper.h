@class NSString, AWEHPCombineSubscriberAbilityImpl;
@protocol AWEHPCombineSubscriberWrapperDelegate, AWEHPNetCombineSubscriberProtocol;

@interface AWEHPCombineSubscriberWrapper : NSObject

@property (weak, nonatomic) id<AWEHPCombineSubscriberWrapperDelegate> delegate;
@property (copy, nonatomic) NSString *businessID;
@property (retain, nonatomic) id<AWEHPNetCombineSubscriberProtocol> subscriber;
@property (retain, nonatomic) AWEHPCombineSubscriberAbilityImpl *abilityImpl;

- (void).cxx_destruct;
- (id)description;

@end
