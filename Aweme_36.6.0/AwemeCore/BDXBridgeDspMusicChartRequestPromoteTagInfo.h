@class NSString, NSNumber;

@interface BDXBridgeDspMusicChartRequestPromoteTagInfo : BDXBridgeModel

@property (copy, nonatomic) NSString *schemaUrl;
@property (copy, nonatomic) NSString *tagUrlLight;
@property (copy, nonatomic) NSString *tagUrlDark;
@property (retain, nonatomic) NSNumber *aspectRatio;
@property (copy, nonatomic) NSString *metaSongID;
@property (copy, nonatomic) NSString *activityID;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
