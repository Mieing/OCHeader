@class HTSLiveUser, NSString, IESLiveUserMultiChorusSongInfo, NSMutableArray, IESLiveUserHighScoreSongTag;

@interface IESLiveSongWaitingUser : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (retain, nonatomic) NSMutableArray *orderedSongNamesArray;
@property (readonly, nonatomic) unsigned long long orderedSongNamesArray_Count;
@property (copy, nonatomic) NSString *applyTimeText;
@property (retain, nonatomic) IESLiveUserHighScoreSongTag *highScoreSongTag;
@property (nonatomic) BOOL hasHighScoreSongTag;
@property (retain, nonatomic) IESLiveUserMultiChorusSongInfo *multiChorusSongInfo;
@property (nonatomic) BOOL hasMultiChorusSongInfo;

+ (id)descriptor;

- (long long)applySongCount:(BOOL)a0;
- (id)firstApplySongName:(BOOL)a0;
- (long long)firstApplySongID:(BOOL)a0;

@end
