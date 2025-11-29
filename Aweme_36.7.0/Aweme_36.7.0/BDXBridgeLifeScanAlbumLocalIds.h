@class NSString, NSNumber, NSArray;

@interface BDXBridgeLifeScanAlbumLocalIds : BDXBridgeModel

@property (copy, nonatomic) NSString *localId;
@property (retain, nonatomic) NSNumber *creatTime;
@property (retain, nonatomic) NSNumber *vidaScore;
@property (retain, nonatomic) NSNumber *score;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSArray *tags;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
