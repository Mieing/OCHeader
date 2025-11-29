@class NSString, NSArray, NSDictionary, AWEURLModel;

@interface AWELiveLocalLifeStickerDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *cardId;
@property (copy, nonatomic) AWEURLModel *titleUrl;
@property (copy, nonatomic) AWEURLModel *productImageUrl;
@property (retain, nonatomic) NSArray *data;
@property (nonatomic) long long width;
@property (nonatomic) long long isFolding;
@property (copy, nonatomic) NSString *background;
@property (copy, nonatomic) NSDictionary *eventParams;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;

@end
