@class NSNumber, NSString;

@interface AWEModelLayerFriendsNetworkProvider.CodeGenDiversediggmodelReqModel : AWENetworkProviderBaseRequestModel {
    void /* function */ text;
}

@property (nonatomic, retain) NSNumber *actionId;
@property (nonatomic, retain) NSNumber *count;
@property (nonatomic, copy) NSString *text;

- (id)toJSONDictionary;
- (void).cxx_destruct;
- (id)init;

@end
