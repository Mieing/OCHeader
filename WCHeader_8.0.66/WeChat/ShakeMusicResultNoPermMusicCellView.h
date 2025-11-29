@class MMUILabel, MMQQMusicInfo, MMMusicPlayerContoller, NSString, UIView, MMUIButton, MMWebImageView;
@protocol ShakeMusicResultNoPermMusicCellViewDelegate;

@interface ShakeMusicResultNoPermMusicCellView : UITableViewCell <MMMusicPlayerContollerDelegate>

@property (nonatomic) long long index;
@property (retain, nonatomic) MMQQMusicInfo *qqMusicInfo;
@property (retain, nonatomic) UIView *topSeperateLine;
@property (retain, nonatomic) UIView *bottomSeperateLine;
@property (retain, nonatomic) MMUIButton *musicInfoContainerButton;
@property (retain, nonatomic) MMWebImageView *musicCoverImageView;
@property (retain, nonatomic) MMUILabel *songName;
@property (retain, nonatomic) MMUILabel *singerName;
@property (retain, nonatomic) MMUIButton *playButton;
@property (retain, nonatomic) MMMusicPlayerContoller *musicPlayerCtrl;
@property (weak, nonatomic) id<ShakeMusicResultNoPermMusicCellViewDelegate> cellDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)getCellHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)newQQMusicInfo:(id)a0 withIndex:(long long)a1;
- (void)playButtonClicked;
- (void)infoButtonClicked;
- (void).cxx_destruct;

@end
