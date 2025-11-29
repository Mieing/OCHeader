@class NSString, NSMutableArray;

@interface MMAudioPlayerQueue : NSObject <CommonPlayerDelegate>

@property (retain, nonatomic) NSMutableArray *m_audioQueue;
@property (nonatomic) float m_volume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)onCommonPlayerPlayEnd;
- (void)onCommonPlayerError:(id)a0;
- (void)setVolume:(float)a0;
- (id)playerWithFormat:(unsigned long long)a0;
- (void)playSoundWithData:(id)a0 format:(unsigned long long)a1;
- (void)playSoundWithPath:(id)a0 format:(unsigned long long)a1;
- (id)init;
- (void)checkQueue;
- (void).cxx_destruct;

@end
