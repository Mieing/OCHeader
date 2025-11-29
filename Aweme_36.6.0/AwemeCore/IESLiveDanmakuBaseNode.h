@interface IESLiveDanmakuBaseNode : NSObject

@property (retain, nonatomic) Class danmakuViewClass;
@property (retain, nonatomic) id danmakuViewModel;
@property (nonatomic) double alpha;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) double danmakuHeight;

- (void).cxx_destruct;

@end
