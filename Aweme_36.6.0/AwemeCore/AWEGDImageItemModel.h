@class AWEGDImageItemData, NSString, NSDictionary, AWEGDImageActionInfoModel;

@interface AWEGDImageItemModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEGDImageActionInfoModel *actionInfo;
@property (retain, nonatomic) AWEGDImageItemData *itemData;
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
