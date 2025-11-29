@class IESLLPOIInfoModel, NSString, IESLLifeURLModel;

@interface IESLLPOIIMShareModel : NSObject

@property (retain, nonatomic) IESLLPOIInfoModel *poiInfoModel;
@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *poiName;
@property (retain, nonatomic) IESLLifeURLModel *imageThumb;
@property (copy, nonatomic) NSString *address;
@property (copy, nonatomic) NSString *formatedDistance;
@property (copy, nonatomic) NSString *subtype;
@property (copy, nonatomic) NSString *popularity;
@property (copy, nonatomic) NSString *cost;
@property (copy, nonatomic) NSString *highlightDesc;
@property (copy, nonatomic) NSString *rankDesc;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (readonly, copy, nonatomic) NSString *formatedCoordinate;

- (void).cxx_destruct;

@end
