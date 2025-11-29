@class IESLLGDImageItemData, NSDictionary, NSString, IESLLGDImageActionInfoModel;

@interface IESLLGDImageItemModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESLLGDImageActionInfoModel *actionInfo;
@property (retain, nonatomic) IESLLGDImageItemData *itemData;
@property (copy, nonatomic) NSDictionary *trackingParams;
@property (retain, nonatomic) NSString *tabKey;
@property (retain, nonatomic) NSString *tabName;
@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
