@class AWEPOILynxModel, NSString, AWEPOICommonEntryModel;

@interface AWEPOITextTagRateInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEPOILynxModel *lynxData;
@property (retain, nonatomic) AWEPOICommonEntryModel *entry;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
