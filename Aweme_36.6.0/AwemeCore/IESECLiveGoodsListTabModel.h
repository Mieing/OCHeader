@class NSArray, NSString, IESECLiveSelectItemImageModel, NSDictionary, NSNumber, IESECLiveImageURLModel;

@interface IESECLiveGoodsListTabModel : MTLModel <MTLJSONSerializing, IESECLiveSelectItem>

@property (retain, nonatomic) id rawType;
@property (retain, nonatomic) NSNumber *tabID;
@property (copy, nonatomic) NSArray *promotionIDs;
@property (retain, nonatomic) NSString *tabType;
@property (retain, nonatomic) NSString *uniqueKey;
@property (retain, nonatomic) NSNumber *enhanceType;
@property (retain, nonatomic) IESECLiveSelectItemImageModel *tabImage;
@property (nonatomic) BOOL showed;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (nonatomic) BOOL fetchByPageGet;
@property (retain, nonatomic) NSArray *expectProductIDArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long itemType;
@property (retain, nonatomic) NSString *itemName;
@property (retain, nonatomic) IESECLiveImageURLModel *itemDefaultImage;
@property (retain, nonatomic) IESECLiveImageURLModel *itemSelectedImage;
@property (retain, nonatomic) NSNumber *canSelect;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
