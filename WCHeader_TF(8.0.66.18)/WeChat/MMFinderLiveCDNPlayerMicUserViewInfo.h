@class MMFinderLiveCDNPlayerSingleAudioMicUserView, UIImageView, MMFinderLiveConnectMicUser;

@interface MMFinderLiveCDNPlayerMicUserViewInfo : NSObject

@property (retain, nonatomic) MMFinderLiveConnectMicUser *userInfo;
@property (retain, nonatomic) MMFinderLiveCDNPlayerSingleAudioMicUserView *userView;
@property (retain, nonatomic) UIImageView *coverImageView;

- (void)createOrUpdateCoverImageViewWithUrl:(id)a0;
- (void)clearAllViews;
- (void).cxx_destruct;

@end
