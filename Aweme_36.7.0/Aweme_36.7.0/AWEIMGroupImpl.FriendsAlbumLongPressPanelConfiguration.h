@class NSString, UIImage;

@interface AWEIMGroupImpl.FriendsAlbumLongPressPanelConfiguration : NSObject <IESIMFriendsAlbumLongPressPanelConfigurationProtocol> {
    void /* function */ title;
    void /* function */ willAppearBlock;
    void /* function */ didClickBlock;
}

@property (nonatomic) BOOL shouldShow;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, copy) id /* block */ willAppearBlock;
@property (nonatomic, copy) id /* block */ didClickBlock;

- (void).cxx_destruct;
- (id)init;

@end
