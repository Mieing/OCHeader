@class NSString;

@interface MJShootingMusicPlayInfo : NSObject <EditVideoBGMPlayerData>

@property (retain, nonatomic) NSString *musicUrl;
@property (nonatomic) unsigned long long songDurationInMs;
@property (nonatomic) unsigned long long musicStartTimeInMs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
