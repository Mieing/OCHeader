@class AWEMusicCardTopLabel, NSString, NSArray, AWEMusicCardUrlModel, AWEMusicCardShareInfo, NSNumber, NSDictionary;

@interface AWEMusicCardModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *songId;
@property (retain, nonatomic) AWEMusicCardShareInfo *shareInfo;
@property (retain, nonatomic) NSString *artistNames;
@property (retain, nonatomic) NSArray *lunaColor;
@property (retain, nonatomic) NSString *lyricId;
@property (retain, nonatomic) NSString *labelText;
@property (retain, nonatomic) NSString *labelSchema;
@property (retain, nonatomic) NSString *sortLabelKey;
@property (retain, nonatomic) NSNumber *offset;
@property (retain, nonatomic) NSNumber *tiggerDigg;
@property (retain, nonatomic) NSString *extra;
@property (retain, nonatomic) NSString *fe_data;
@property (retain, nonatomic) NSString *laterListenText;
@property (retain, nonatomic) AWEMusicCardUrlModel *albumCover;
@property (retain, nonatomic) NSDictionary *extraDic;
@property (retain, nonatomic) AWEMusicCardTopLabel *topLabel;
@property (readonly, nonatomic) NSString *scheme;
@property (readonly, nonatomic) BOOL isNoneBg;

+ (id)lunaColorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
