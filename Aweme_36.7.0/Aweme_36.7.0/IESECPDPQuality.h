@class IESECQualityInfoV2, IESECGoodsDetailQualityInfo, NSString;

@interface IESECPDPQuality : NSObject <IESECPDPQualityService>

@property (retain, nonatomic) IESECGoodsDetailQualityInfo *qualityInfo;
@property (retain, nonatomic) IESECQualityInfoV2 *qualityInfoV2;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
