@class NSString, IESLLLiveURLModel, NSArray, NSDictionary;

@interface IESLLLiveStickerDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *cardId;
@property (copy, nonatomic) IESLLLiveURLModel *titleUrl;
@property (copy, nonatomic) IESLLLiveURLModel *productImageUrl;
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
