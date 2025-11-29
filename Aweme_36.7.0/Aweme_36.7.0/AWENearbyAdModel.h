@class NSString, AWENearByOriginalAdModel;

@interface AWENearbyAdModel : AWEBaseApiModel <AWENearbyInsertCardProtocol>

@property (nonatomic) long long indexToInsert;
@property (retain, nonatomic) AWENearByOriginalAdModel *originAdInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)originAdInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
