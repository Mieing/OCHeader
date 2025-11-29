@class NSString, NSMutableArray;

@interface FinderLiveGift_SwitchSkinInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *switchSkinInfoList;
@property (retain, nonatomic) NSString *defaultSkinId;
@property (retain, nonatomic) NSString *selectedSkinId;
@property (retain, nonatomic) NSString *customText;
@property (nonatomic) BOOL specificCustomText;
@property (retain, nonatomic) NSString *antispamCustomText;

+ (void)initialize;

@end
