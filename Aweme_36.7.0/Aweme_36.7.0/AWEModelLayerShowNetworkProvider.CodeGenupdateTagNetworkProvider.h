@class NSString, NSNumber;

@interface AWEModelLayerShowNetworkProvider.CodeGenupdateTagNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ fromSource;
    void /* function */ scene;
    void /* function */ userOperator;
    void /* function */ reason;
}

@property (nonatomic, copy) NSString *fromSource;
@property (nonatomic, retain) NSNumber *tagType;
@property (nonatomic, retain) NSNumber *tagStatus;
@property (nonatomic, retain) NSNumber *tagId;
@property (nonatomic, retain) NSNumber *version;
@property (nonatomic, copy) NSString *scene;
@property (nonatomic, copy) NSString *userOperator;
@property (nonatomic, copy) NSString *reason;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
