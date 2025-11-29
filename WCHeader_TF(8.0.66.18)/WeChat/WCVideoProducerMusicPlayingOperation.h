@class OMJMusicInfo;

@interface WCVideoProducerMusicPlayingOperation : WCVideoProducerBaseOperation

@property (retain, nonatomic) OMJMusicInfo *omjMusicInfo;
@property (nonatomic) long long musicOrder;

- (id)initWithMusic:(id)a0 order:(long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
