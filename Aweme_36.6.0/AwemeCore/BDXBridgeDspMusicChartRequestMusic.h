@class NSString, NSNumber, BDXBridgeDspMusicChartRequestPromoteTagInfo;

@interface BDXBridgeDspMusicChartRequestMusic : BDXBridgeModel

@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *coverUrl;
@property (retain, nonatomic) NSNumber *useCount;
@property (copy, nonatomic) NSString *playUrl;
@property (nonatomic) BOOL isCollected;
@property (copy, nonatomic) NSString *authorId;
@property (retain, nonatomic) BDXBridgeDspMusicChartRequestPromoteTagInfo *promoteTagInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
