@class IESSoloKTVDraftSongLyricModel, NSString, IESSoloKTVDraftSongPathModel, NSArray, NSNumber, IESLiveKRCSong;

@interface IESSoloKTVDraftSongModel : NSObject

@property (retain, nonatomic) NSNumber *songID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *author;
@property (retain, nonatomic) IESSoloKTVDraftSongPathModel *original;
@property (retain, nonatomic) IESSoloKTVDraftSongPathModel *accompany;
@property (retain, nonatomic) IESSoloKTVDraftSongLyricModel *lyric;
@property (copy, nonatomic) NSString *midiPath;
@property (nonatomic) long long duration;
@property (nonatomic) BOOL isHighRisk;
@property (retain, nonatomic) IESLiveKRCSong *lyricModel;
@property (copy, nonatomic) NSArray *midiModel;
@property (nonatomic) BOOL originalExist;
@property (nonatomic) BOOL accompanyExist;
@property (nonatomic) BOOL lyricExist;
@property (nonatomic) BOOL midiExist;

- (BOOL)checkAllPathExist;
- (void).cxx_destruct;
- (id)init;

@end
