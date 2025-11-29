@class NSNumber, NSString;

@interface AWEModelLayerIMNetworkProvider.CodeGenIMUserbaseinfoReqModel : AWENetworkProviderBaseRequestModel {
    void /* function */ devicePlatform;
    void /* function */ channel;
}

@property (nonatomic, retain) NSNumber *uid;
@property (nonatomic, retain) NSNumber *did;
@property (nonatomic, retain) NSNumber *appId;
@property (nonatomic, retain) NSNumber *versionCode;
@property (nonatomic, copy) NSString *devicePlatform;
@property (nonatomic, retain) NSNumber *installId;
@property (nonatomic, copy) NSString *channel;

- (id)toJSONDictionary;
- (void).cxx_destruct;
- (id)init;

@end
