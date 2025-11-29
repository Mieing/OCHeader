@class NSString, AWELiveLocalLifeStickerDataModel, AWELiveLocalLifeCardRawDataModel, AWELiveLocalLifeControlDataModel, NSDictionary;

@interface AWELiveLocalLifeCardInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWELiveLocalLifeCardRawDataModel *cardRawInfo;
@property (retain, nonatomic) AWELiveLocalLifeControlDataModel *controlInfo;
@property (retain, nonatomic) AWELiveLocalLifeStickerDataModel *stickerData;
@property (copy, nonatomic) NSString *cardType;
@property (copy, nonatomic) NSDictionary *originCardData;
@property (copy, nonatomic) NSDictionary *originControlData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardRawInfoJSONTransformer;
+ (id)controlInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
