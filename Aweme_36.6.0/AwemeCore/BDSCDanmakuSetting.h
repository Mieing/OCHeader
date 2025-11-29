@interface BDSCDanmakuSetting : NSObject

@property (nonatomic) long long danmakuArea;
@property (nonatomic) long long fontSize;
@property (nonatomic) double alpha;

- (id)toDictionary;
- (id)init;
- (id)initWithDict:(id)a0;

@end
