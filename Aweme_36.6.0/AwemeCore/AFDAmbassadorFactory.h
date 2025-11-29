@class NSString;

@interface AFDAmbassadorFactory : HTSService <AFDAmbassadorFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)makeFeedTableViewControllerFriendsAmbassador;

@end
