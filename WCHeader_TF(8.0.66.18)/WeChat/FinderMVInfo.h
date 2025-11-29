@class FinderMVInfo_FinderMVOriginalInfo, NSMutableArray, FinderMVInfo_FinderMVSongInfo;

@interface FinderMVInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *orderedTrackList;
@property (retain, nonatomic) FinderMVInfo_FinderMVSongInfo *songInfo;
@property (retain, nonatomic) FinderMVInfo_FinderMVOriginalInfo *originalInfo;
@property (retain, nonatomic) NSMutableArray *orderedTrackListFlexClip;
@property (nonatomic) int mvType;
@property (nonatomic) int draftJumpPage;

+ (void)initialize;

- (void)setDraftJumpPage:(int)a0;
- (int)draftJumpPage;
- (void)setMvType:(int)a0;
- (int)mvType;
- (void)setOrderedTrackListFlexClip:(id)a0;
- (id)orderedTrackListFlexClip;
- (void)setOriginalInfo:(id)a0;
- (id)originalInfo;
- (void)setSongInfo:(id)a0;
- (id)songInfo;
- (void)setOrderedTrackList:(id)a0;
- (id)orderedTrackList;

@end
