@class AWEURLModel, NSString, AWEPOIInfoModel;

@interface AWEChallengeRelatedPoiModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEPOIInfoModel *poiInfo;
@property (retain, nonatomic) AWEURLModel *headImage;
@property (nonatomic) long long mentionedNum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
