@class NSString, FinderLiveGift_ResourceUrl;

@interface FinderLiveGift_SwitchSkinItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *skinId;
@property (retain, nonatomic) FinderLiveGift_ResourceUrl *animation;
@property (retain, nonatomic) FinderLiveGift_ResourceUrl *landscapeAnimation;
@property (retain, nonatomic) FinderLiveGift_ResourceUrl *thumbnail;
@property (retain, nonatomic) FinderLiveGift_ResourceUrl *preview;
@property (nonatomic) float price;
@property (retain, nonatomic) NSString *colorValue;
@property (nonatomic) BOOL invisible;
@property (nonatomic) BOOL canCustomText;
@property (retain, nonatomic) NSString *customTitle;
@property (retain, nonatomic) NSString *cancelCustomTitle;
@property (retain, nonatomic) NSString *reCustomTitle;
@property (nonatomic) unsigned int textLenLimit;
@property (retain, nonatomic) FinderLiveGift_ResourceUrl *customThumbnail;
@property (retain, nonatomic) FinderLiveGift_ResourceUrl *customPreview;
@property (retain, nonatomic) FinderLiveGift_ResourceUrl *customPagePreview;
@property (retain, nonatomic) FinderLiveGift_ResourceUrl *customAnimation;
@property (retain, nonatomic) FinderLiveGift_ResourceUrl *customLandscapeAnimation;
@property (retain, nonatomic) NSString *name;

+ (void)initialize;

@end
