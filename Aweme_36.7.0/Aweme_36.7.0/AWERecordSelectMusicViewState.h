@class ACCRecordSelectMusicCoverInfo;

@interface AWERecordSelectMusicViewState : NSObject <FPUIState>

@property (nonatomic) BOOL supportSelectMusic;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL shouldAnimate;
@property (nonatomic) BOOL showAnimate;
@property (nonatomic) BOOL enableImageRotation;
@property (nonatomic) BOOL showCloseButton;
@property (nonatomic) BOOL showLabelShadow;
@property (nonatomic) unsigned long long animationType;
@property (retain, nonatomic) ACCRecordSelectMusicCoverInfo *musicCoverInfo;

- (id)initWithSupportSelectMusic:(BOOL)a0 enable:(BOOL)a1 hidden:(BOOL)a2 animationType:(unsigned long long)a3 musicCoverInfo:(id)a4;
- (void).cxx_destruct;

@end
