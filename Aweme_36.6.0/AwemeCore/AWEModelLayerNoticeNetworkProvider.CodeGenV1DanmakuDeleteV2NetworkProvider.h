@class NSString, NSNumber;

@interface AWEModelLayerNoticeNetworkProvider.CodeGenV1DanmakuDeleteV2NetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ danmakuId;
}

@property (nonatomic, copy) NSString *danmakuId;
@property (nonatomic, retain) NSNumber *userType;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
