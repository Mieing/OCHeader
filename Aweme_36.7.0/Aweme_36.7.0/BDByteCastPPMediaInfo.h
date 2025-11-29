@class NSString, NSArray, BDByteCastPPDanmakuBean, BDByteCastPPSubtitleBean;

@interface BDByteCastPPMediaInfo : NSObject

@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSString *dramaId;
@property (copy, nonatomic) NSArray *dramaBeans;
@property (nonatomic) long long loopMode;
@property (nonatomic) long long shuffle;
@property (nonatomic) float speed;
@property (retain, nonatomic) BDByteCastPPDanmakuBean *danmaku;
@property (copy, nonatomic) NSString *resolution;
@property (nonatomic) long long resolutionMode;
@property (nonatomic) long long stretch;
@property (retain, nonatomic) BDByteCastPPSubtitleBean *subtitle;
@property (nonatomic) long long skip;
@property (copy, nonatomic) NSArray *speeds;

+ (id)modelContainerPropertyGenericClass;

- (void).cxx_destruct;

@end
