@class NSNumber, NSString;

@interface AWEModelLayerMusicNetworkProvider.CodeGenV1UserMusicCollectV2NetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ scene;
    void /* function */ userId;
    void /* function */ secUserId;
    void /* function */ cursorNew;
}

@property (nonatomic, retain) NSNumber *cursor;
@property (nonatomic, retain) NSNumber *count;
@property (nonatomic, copy) NSString *scene;
@property (nonatomic, copy) NSString *userId;
@property (nonatomic, copy) NSString *secUserId;
@property (nonatomic, retain) NSNumber *collectScene;
@property (nonatomic, retain) NSNumber *isTeenMode;
@property (nonatomic, copy) NSString *cursorNew;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
