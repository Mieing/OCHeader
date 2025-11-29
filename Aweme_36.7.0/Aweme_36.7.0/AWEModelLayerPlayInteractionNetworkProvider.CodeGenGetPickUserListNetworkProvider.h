@class NSNumber, NSString;

@interface AWEModelLayerPlayInteractionNetworkProvider.CodeGenGetPickUserListNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ pinUserIdList;
}

@property (nonatomic, retain) NSNumber *itemId;
@property (nonatomic, retain) NSNumber *maxCursor;
@property (nonatomic, retain) NSNumber *count;
@property (nonatomic, retain) NSNumber *pinUserId;
@property (nonatomic, copy) NSString *pinUserIdList;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
