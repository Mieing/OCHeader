@class NSString;

@interface AWEFamiliarCloneManager : NSObject <AWEFamiliarCloneManagerProtocol>

@property (copy, nonatomic) id /* block */ getFriendsData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void).cxx_destruct;

@end
