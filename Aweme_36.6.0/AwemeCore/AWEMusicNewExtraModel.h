@class AWEMusicExtraDouyinBeatsInfoModel, NSString, NSDictionary, NSNumber, AWEMusicExtraBeatsModel;

@interface AWEMusicNewExtraModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *albumId;
@property (copy, nonatomic) NSString *album;
@property (copy, nonatomic) NSString *albumTitle;
@property (retain, nonatomic) NSNumber *songId;
@property (copy, nonatomic) NSString *allRate;
@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *picSmall;
@property (copy, nonatomic) NSString *picPremium;
@property (copy, nonatomic) NSString *picBig;
@property (copy, nonatomic) NSString *picHuge;
@property (nonatomic) BOOL hasEdited;
@property (retain, nonatomic) NSNumber *appleMusicID;
@property (copy, nonatomic) NSString *topTagURLString;
@property (copy, nonatomic) NSDictionary *jumpToLunaMv;
@property (copy, nonatomic) NSString *jaychouUrl;
@property (nonatomic) BOOL isAEDMusic;
@property (retain, nonatomic) NSNumber *AEDMusicScore;
@property (retain, nonatomic) NSNumber *AEDSingingScore;
@property (retain, nonatomic) AWEMusicExtraBeatsModel *beatsModel;
@property (retain, nonatomic) AWEMusicExtraDouyinBeatsInfoModel *douyinBeatsInfoModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
