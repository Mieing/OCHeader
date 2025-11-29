@class NSString;
@protocol AEKAudioStashes;

@interface ACCTemplateMusicExclusiveRecoverInfo : NSObject

@property (retain, nonatomic) id<AEKAudioStashes> stashes;
@property (nonatomic) BOOL showAudioEditTip;
@property (copy, nonatomic) NSString *audioEditTipTitle;

- (void)recordAudioStashes:(id)a0 showAudioEditTip:(BOOL)a1 audioEditTipTitle:(id)a2;
- (void).cxx_destruct;
- (void)reset;

@end
