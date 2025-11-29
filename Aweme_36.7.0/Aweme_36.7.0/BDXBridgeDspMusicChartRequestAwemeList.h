@class NSString;

@interface BDXBridgeDspMusicChartRequestAwemeList : BDXBridgeModel

@property (copy, nonatomic) NSString *awemeId;
@property (copy, nonatomic) NSString *coverUrl;
@property (copy, nonatomic) NSString *playUrl;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *avatarUrl;
@property (copy, nonatomic) NSString *diggCount;
@property (copy, nonatomic) NSString *templateId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
