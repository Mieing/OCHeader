@class IESLLLiveCardRawDataModel, IESLLLiveControlDataModel, IESLLLiveStickerDataModel, NSString, NSDictionary;

@interface IESLLLiveCardInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESLLLiveCardRawDataModel *cardRawInfo;
@property (retain, nonatomic) IESLLLiveControlDataModel *controlInfo;
@property (retain, nonatomic) IESLLLiveStickerDataModel *stickerData;
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
