@class IESECRitTagBackgroundModel, NSArray, NSString;

@interface IESECRitTagUIModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECRitTagBackgroundModel *background;
@property (copy, nonatomic) NSArray *uiItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)uiItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
