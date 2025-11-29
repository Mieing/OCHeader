@class NSMutableArray;

@interface IESLiveKTVControlVideoChorusInfoView : UIView

@property (retain, nonatomic) NSMutableArray *avatarViews;

- (long long)currentShowingImagesCount;
- (void)updateAvatarImages:(id)a0;
- (id)generateStandardViewWithImage:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)init;

@end
