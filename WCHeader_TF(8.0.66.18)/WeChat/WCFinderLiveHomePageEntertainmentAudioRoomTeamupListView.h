@class NSArray, NSMutableArray;
@protocol WCFinderLiveHomePageEntertainmentAudioRoomTeamupListViewDelegate;

@interface WCFinderLiveHomePageEntertainmentAudioRoomTeamupListView : UIView

@property (retain, nonatomic) NSMutableArray *avatarList;
@property (readonly, nonatomic) NSArray *showingList;
@property (nonatomic) struct CGSize { double width; double height; } avatarSize;
@property (nonatomic) double avatarMargin;
@property (weak, nonatomic) id<WCFinderLiveHomePageEntertainmentAudioRoomTeamupListViewDelegate> delegate;
@property (readonly, nonatomic) unsigned long long lines;

+ (unsigned long long)maxTeamListCount;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)initViews;
- (void)updateAudioWaveColor:(id)a0;
- (void)updateListCameraOn:(id)a0;
- (void)updateTalkingStatus:(id)a0;
- (void)updateWithInfoList:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)calculateAvatarSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
