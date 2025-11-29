@class AWEGeneralActivityLiveReserveResponseDataModel;

@interface AWEGeneralActivityLiveReserveResponse : AWEBaseApiModel <IGListDiffable>

@property (retain, nonatomic) AWEGeneralActivityLiveReserveResponseDataModel *data;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void).cxx_destruct;

@end
