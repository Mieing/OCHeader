@class NSString, NSMutableDictionary, UIView;
@protocol AWESearchMusicRecommendedVideoListViewProtocol, ACCSingleMusicRecommenVideosTableViewCellDelegate;

@interface AWESingleMusicRecommenVideosTableViewCell : UITableViewCell <ACCSingleMusicRecommenVideosTableViewCellProtocol>

@property (retain, nonatomic) UIView<AWESearchMusicRecommendedVideoListViewProtocol> *videoListView;
@property (weak, nonatomic) id<ACCSingleMusicRecommenVideosTableViewCellDelegate> delegate;
@property (nonatomic) long long rank;
@property (nonatomic) BOOL showTopSeparatorLine;
@property (retain, nonatomic) NSMutableDictionary *logExtraDict;
@property (retain, nonatomic) NSString *referString;
@property (copy, nonatomic) id /* block */ solveCloseGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateUITheme:(BOOL)a0;
- (void)stopVideoPlay;
- (void)clearVideoUseMusicButton;
- (void)updateWithModel:(id)a0 playerContainer:(id)a1 index:(long long)a2 offsetX:(double)a3;
- (void)updateWithModel:(id)a0 offsetX:(double)a1 lastPlayedIndex:(long long)a2;
- (struct CGPoint { double x0; double x1; })getListContentOffset;
- (void)removePlayerContainer;
- (void)updateWithModel:(id)a0 offsetX:(double)a1;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)awakeFromNib;
- (void)layoutSubviews;

@end
