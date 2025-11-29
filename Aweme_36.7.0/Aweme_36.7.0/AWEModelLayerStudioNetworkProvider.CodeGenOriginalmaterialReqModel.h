@class NSNumber, NSString;

@interface AWEModelLayerStudioNetworkProvider.CodeGenOriginalmaterialReqModel : AWENetworkProviderBaseRequestModel {
    void /* function */ materialId;
    void /* function */ memoryEffectId;
    void /* function */ materialData;
}

@property (nonatomic, retain) NSNumber *materialType;
@property (nonatomic, copy) NSString *materialId;
@property (nonatomic, retain) NSNumber *mvType;
@property (nonatomic, retain) NSNumber *aigcType;
@property (nonatomic, copy) NSString *memoryEffectId;
@property (nonatomic, copy) NSString *materialData;

- (id)toJSONDictionary;
- (void).cxx_destruct;
- (id)init;

@end
