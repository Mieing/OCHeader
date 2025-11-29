@class NSString, NSArray;

@interface BDXBridgeOpenPlatformShowOpenShareTitleObject : BDXBridgeModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *shortTitle;
@property (retain, nonatomic) NSArray *hashtagTitleMarkers;
@property (retain, nonatomic) NSArray *mentionTitleMarkers;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
