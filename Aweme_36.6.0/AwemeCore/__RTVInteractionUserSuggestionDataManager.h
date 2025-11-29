@class RxScheduler, NSString;
@protocol RxInjector;

@interface __RTVInteractionUserSuggestionDataManager : NSObject <RTVInteractionUserSuggestionDataManagerInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) RxScheduler *scheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (id)getInteractionInviteUserSuggestionWithFilterUsersNotInGroup:(id)a0;
- (void).cxx_destruct;

@end
