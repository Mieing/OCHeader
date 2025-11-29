@class NSDictionary, AWEIMFansGroupGuestItemViewModel;

@interface AWEIMFansGroupGuestStateJoinGroupContext : NSObject

@property (retain, nonatomic) AWEIMFansGroupGuestItemViewModel *vm;
@property (nonatomic) long long sourceType;
@property (copy, nonatomic) NSDictionary *invitationExtra;
@property (copy, nonatomic) NSDictionary *bizExtra;

- (void).cxx_destruct;

@end
