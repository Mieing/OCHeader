@class NSString, IESLLPOIInfoModel;

@interface IESLLRepoPOIModel : NSObject <NSCopying>

@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *poiName;
@property (copy, nonatomic) NSString *selectedPoiID;
@property (copy, nonatomic) NSString *selectedPoiName;
@property (retain, nonatomic) IESLLPOIInfoModel *detailPoiInfoModel;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
