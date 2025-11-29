@class NSArray, NSString;

@interface AWEPaySwiftImpl.FKMPreApplyPlacementInfoModel : MTLModel <MTLJSONSerializing> {
    void /* function */ contentInfos;
    void /* function */ promotionPreQueryID;
}

@property (nonatomic, copy) NSArray *contentInfos;
@property (nonatomic, copy) NSString *promotionPreQueryID;

+ (id)contentInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
