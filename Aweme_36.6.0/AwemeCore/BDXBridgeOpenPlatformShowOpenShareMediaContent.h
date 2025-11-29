@class NSNumber, NSString, NSArray;

@interface BDXBridgeOpenPlatformShowOpenShareMediaContent : BDXBridgeModel

@property (retain, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSString *musicId;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) NSArray *path;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
