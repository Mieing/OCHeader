@class NSMutableArray;

@interface IamBizRedDotUpdateInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *scenes;
@property (nonatomic) unsigned int timestamp;

+ (void)initialize;

- (void)setTimestamp:(unsigned int)a0;
- (unsigned int)timestamp;
- (void)setScenes:(id)a0;
- (id)scenes;

@end
