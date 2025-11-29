@class NSNumber, NSArray, NSString;

@interface AWEModelLayerStudioNetworkProvider.CodeGenSameactionmaterialstructReqModel : AWENetworkProviderBaseRequestModel {
    void /* function */ material;
    void /* function */ activityMobMap;
    void /* function */ extraInfo;
}

@property (nonatomic, retain) NSNumber *itemId;
@property (nonatomic, retain) NSNumber *relatedItemType;
@property (nonatomic, copy) NSArray *material;
@property (nonatomic, copy) NSString *activityMobMap;
@property (nonatomic, copy) NSString *extraInfo;

- (id)toJSONDictionary;
- (void).cxx_destruct;
- (id)init;

@end
