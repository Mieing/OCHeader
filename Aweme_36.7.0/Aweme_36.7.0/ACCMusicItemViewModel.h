@class ACCMusicUIThemeModel, NSString, NSArray, UIImage;
@protocol ACCMusicModelProtocol;

@interface ACCMusicItemViewModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *coverImage;
@property (copy, nonatomic) NSString *recommendTag;
@property (copy, nonatomic) NSString *authorName;
@property (copy, nonatomic) NSString *durationText;
@property (retain, nonatomic) id<ACCMusicModelProtocol> musicModel;
@property (nonatomic, getter=isFavorite) BOOL favorite;
@property (readonly, copy, nonatomic) NSArray *coverURLs;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isLoading) BOOL loading;
@property (nonatomic, getter=isClipAvailable) BOOL clipAvailable;
@property (nonatomic, getter=isFavoriteEnabled) BOOL favoriteEnabled;
@property (nonatomic) BOOL longPressEnabled;
@property (nonatomic, getter=isApplyButtonAvailable) BOOL applyButtonAvailable;
@property (retain, nonatomic) ACCMusicUIThemeModel *themeModel;
@property (retain, nonatomic) NSString *musicRecallSource;

- (id)initWithMusicModel:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
