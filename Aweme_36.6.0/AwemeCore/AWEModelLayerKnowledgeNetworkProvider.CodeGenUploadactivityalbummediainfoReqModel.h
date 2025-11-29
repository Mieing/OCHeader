@class NSNumber, NSString;

@interface AWEModelLayerKnowledgeNetworkProvider.CodeGenUploadactivityalbummediainfoReqModel : AWENetworkProviderBaseRequestModel {
    void /* function */ uri;
    void /* function */ videoId;
}

@property (nonatomic, retain) NSNumber *mediaType;
@property (nonatomic, copy) NSString *uri;
@property (nonatomic, copy) NSString *videoId;

- (id)toJSONDictionary;
- (void).cxx_destruct;
- (id)init;

@end
