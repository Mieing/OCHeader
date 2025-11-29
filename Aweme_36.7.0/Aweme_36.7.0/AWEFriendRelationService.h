@class NSString;

@interface AWEFriendRelationService : HTSService <AWEFriendRelationService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)friendState;
- (id)friendCount;

@end
