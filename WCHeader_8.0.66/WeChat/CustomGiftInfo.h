@class FinderLiveGift_ResourceUrl, NSString, CustomGiftText, NSMutableArray;

@interface CustomGiftInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *giftComponentList;
@property (retain, nonatomic) CustomGiftText *customGiftText;
@property (retain, nonatomic) NSMutableArray *resourceList;
@property (retain, nonatomic) FinderLiveGift_ResourceUrl *backupThumbnail;
@property (retain, nonatomic) FinderLiveGift_ResourceUrl *backupPreview;
@property (retain, nonatomic) FinderLiveGift_ResourceUrl *backupAnimation;
@property (retain, nonatomic) FinderLiveGift_ResourceUrl *backupLandscapeAnimation;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) FinderLiveGift_ResourceUrl *engine;
@property (retain, nonatomic) NSString *minCodeVersion;
@property (nonatomic) BOOL hasCustomized;

+ (void)initialize;

@end
