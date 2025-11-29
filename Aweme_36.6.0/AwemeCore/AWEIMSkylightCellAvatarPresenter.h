@class AWEIMImageTrackerConfig, NSString, NSArray, UIImage, UIColor;
@protocol AWEIMImageProtocol;

@interface AWEIMSkylightCellAvatarPresenter : AWEIMSkylightBasePresenter

@property (nonatomic) BOOL isUserAvatar;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSArray *avatarUrLList;
@property (retain, nonatomic) UIImage *placeholder;
@property (retain, nonatomic) id<AWEIMImageProtocol> cachedPlaceholderKeyProvider;
@property (retain, nonatomic) AWEIMImageTrackerConfig *trackerConfig;
@property (nonatomic) double roundCornerRatio;
@property (nonatomic) BOOL clipsToBounds;
@property (nonatomic) double cornerRadius;
@property (nonatomic) long long contentMode;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *tintColor;

- (unsigned long long)componentViewPosition;
- (void)updateView:(id)a0;
- (void)configFriendInfo:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)createView;

@end
