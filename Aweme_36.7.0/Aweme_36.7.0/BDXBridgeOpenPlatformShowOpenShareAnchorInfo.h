@class NSNumber, NSString, BDXBridgeOpenPlatformShowOpenShareAnchorIcon;

@interface BDXBridgeOpenPlatformShowOpenShareAnchorInfo : BDXBridgeModel

@property (retain, nonatomic) NSNumber *anchorBusinessType;
@property (copy, nonatomic) NSString *anchorTitle;
@property (copy, nonatomic) NSString *anchorContent;
@property (retain, nonatomic) BDXBridgeOpenPlatformShowOpenShareAnchorIcon *anchorIcon;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
