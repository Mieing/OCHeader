@class NSString, UIView;

@interface AFDPiPContext : NSObject

@property (retain, nonatomic) NSString *contentIdentifier;
@property (weak, nonatomic) UIView *contentView;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) double rate;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL isStalling;
@property (nonatomic) double duration;
@property (nonatomic) double currentPlaybackTime;
@property (copy, nonatomic) id /* block */ getEnterMethod;
@property (copy, nonatomic) id /* block */ play;
@property (copy, nonatomic) id /* block */ pause;
@property (copy, nonatomic) id /* block */ didClickPlayButton;
@property (copy, nonatomic) id /* block */ didClickPauseButton;
@property (copy, nonatomic) id /* block */ seekToTime;
@property (copy, nonatomic) id /* block */ restoreContentView;

- (void).cxx_destruct;

@end
