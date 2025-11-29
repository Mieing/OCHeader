@class UIImage;

@interface AWELiveAudioFeedViewModel : NSObject

@property (retain, nonatomic) UIImage *backgroundImage;
@property (retain, nonatomic) UIImage *foregroundImage;
@property (readonly, nonatomic) BOOL shouldShowAudioLiveFeedStyleCover;
@property (nonatomic, getter=isOnLive) BOOL onLive;

- (void)fetchAndUpdateAvatarImage:(id)a0 completion:(id /* block */)a1;
- (void)fetchAndUpdateCoverImage:(id)a0 completion:(id /* block */)a1;
- (void)fetchBackgroundImageWithRoomModel:(id)a0 completion:(id /* block */)a1;
- (void)fetchForegroundImageWithRoomModel:(id)a0 userModel:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)reset;

@end
