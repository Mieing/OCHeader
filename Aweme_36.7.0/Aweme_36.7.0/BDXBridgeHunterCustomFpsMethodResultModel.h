@class NSNumber;

@interface BDXBridgeHunterCustomFpsMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *fpsTime;
@property (retain, nonatomic) NSNumber *dropMax;
@property (retain, nonatomic) NSNumber *drop3;
@property (retain, nonatomic) NSNumber *drop7;
@property (retain, nonatomic) NSNumber *lostRate;
@property (retain, nonatomic) NSNumber *fpsTimeStart;
@property (retain, nonatomic) NSNumber *fpsTimeEnd;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
