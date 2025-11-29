@class NSString, NSNumber;

@interface AWEModelLayerFriendsNetworkProvider.CodeGenV1UserRemarkTipsNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ uid;
}

@property (nonatomic, copy) NSString *uid;
@property (nonatomic, retain) NSNumber *enableAddressBook;
@property (nonatomic, retain) NSNumber *enableGreeting;
@property (nonatomic, retain) NSNumber *addressBookAccess;
@property (nonatomic, retain) NSNumber *fromSource;
@property (nonatomic, retain) NSNumber *enableMateApplyMsg;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
