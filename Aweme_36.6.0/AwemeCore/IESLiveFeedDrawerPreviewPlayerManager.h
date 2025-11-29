@protocol IESLivePlayerProtocol;

@interface IESLiveFeedDrawerPreviewPlayerManager : NSObject

@property (retain, nonatomic) id<IESLivePlayerProtocol> firstPlayer;
@property (retain, nonatomic) id<IESLivePlayerProtocol> secondPlayer;
@property (nonatomic) unsigned long long drawerPreviewType;
@property (nonatomic) double drawerPreviewDuration;

+ (id)shareInstance;

- (unsigned long long)getDrawerPreviewType;
- (void)releaseManager;
- (void)closeUnusedPlayer;
- (void)previewInCell:(id)a0;
- (id)unusedPlayer;
- (void).cxx_destruct;
- (id)init;

@end
