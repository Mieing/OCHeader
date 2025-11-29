@class NSString, NSArray;
@protocol RTVVoipRingtoneMusicModelProtocol;

@interface RTVVoipRingtoneItemViewModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *recommendTag;
@property (copy, nonatomic) NSString *authorName;
@property (copy, nonatomic) NSString *durationText;
@property (retain, nonatomic) id<RTVVoipRingtoneMusicModelProtocol> musicModel;
@property (readonly, copy, nonatomic) NSArray *coverURLs;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isLoading) BOOL loading;
@property (nonatomic, getter=isClipAvailable) BOOL clipAvailable;
@property (nonatomic, getter=isFavorite) BOOL favorite;
@property (nonatomic, getter=isFavoriteEnabled) BOOL favoriteEnabled;
@property (nonatomic) BOOL longPressEnabled;
@property (nonatomic, getter=isApplyButtonAvailable) BOOL applyButtonAvailable;
@property (copy, nonatomic) NSString *keyWord;

- (id)initWithMusicModel:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
