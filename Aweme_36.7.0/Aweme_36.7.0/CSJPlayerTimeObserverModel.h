@class CSJAdInfoViewModel, BUPlayer, NSString;

@interface CSJPlayerTimeObserverModel : NSObject <BUVideoPlayerTimeDelegate>

@property (nonatomic) BOOL haveSeek;
@property (retain, nonatomic) BUPlayer *player;
@property (retain, nonatomic) CSJAdInfoViewModel *infoViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
