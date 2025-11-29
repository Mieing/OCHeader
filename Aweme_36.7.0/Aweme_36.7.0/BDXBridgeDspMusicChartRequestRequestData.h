@class NSString, NSNumber;

@interface BDXBridgeDspMusicChartRequestRequestData : BDXBridgeModel

@property (copy, nonatomic) NSString *chartId;
@property (copy, nonatomic) NSString *musicId;
@property (retain, nonatomic) NSNumber *itemCount;
@property (nonatomic) BOOL containsMusic;
@property (copy, nonatomic) NSString *version;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
