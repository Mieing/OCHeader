@interface AWETeenProfileCoverManager : NSObject

@property (nonatomic) unsigned long long source;
@property (nonatomic) BOOL isCounted;
@property (nonatomic) BOOL alreadySet;
@property (nonatomic) BOOL isTopVideoFullScreen;

+ (id)sharedInstance;

- (void)alreadySetCover;
- (BOOL)useCreativeAlbumKit;
- (void)uploadCoverWithImage:(id)a0;
- (void)userLogout;
- (void)selectCoverWithSelectedBlock:(id /* block */)a0;

@end
