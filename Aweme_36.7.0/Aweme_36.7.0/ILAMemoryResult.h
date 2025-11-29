@class NSArray, NSString, ILAAsset, ILAAOI;

@interface ILAMemoryResult : NSObject

@property (retain, nonatomic) ILAAsset *asset;
@property (copy, nonatomic) NSArray *tagsInfo;
@property (copy, nonatomic) NSString *countryID;
@property (copy, nonatomic) NSString *cityID;
@property (nonatomic) double vidaScore;
@property (nonatomic) long long similarClusterId;
@property (copy, nonatomic) NSArray *clip128Normal;
@property (retain, nonatomic) ILAAOI *aoi;

- (void).cxx_destruct;

@end
