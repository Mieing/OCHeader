@class NSString;
@protocol MMBGMSelectedMusicDataProtocol;

@interface MMBGMSelectedMusicResult : NSObject

@property (nonatomic) BOOL isMusicOn;
@property (nonatomic) BOOL isLyricOn;
@property (nonatomic) BOOL isOstOn;
@property (copy, nonatomic) NSString *musicFilePath;
@property (retain, nonatomic) id<MMBGMSelectedMusicDataProtocol> musicData;

- (id)genRecommendedMusicInfo;
- (id)genSelectedMusicInfo;
- (void).cxx_destruct;

@end
