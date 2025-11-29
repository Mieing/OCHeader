@class NSString, AWECodeGenUrlModel, AWECodeGenLunaAuthorModel, NSArray, AWECodeGenAppendPlaylistModel;

@interface AWECodeGenMusicDiversionModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *lunaSongId;
@property (retain, nonatomic) AWECodeGenUrlModel *coverMediumModel;
@property (nonatomic) int hitStrategy;
@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL isSame;
@property (nonatomic) int scene;
@property (nonatomic) int collectStatus;
@property (nonatomic) BOOL showHead;
@property (retain, nonatomic) AWECodeGenLunaAuthorModel *lunaAuthorInfoModel;
@property (nonatomic) long long hitStrategyV2;
@property (copy, nonatomic) NSArray *middlePageColorModelArray;
@property (copy, nonatomic) NSString *mediaType;
@property (copy, nonatomic) NSString *mvMetaSongId;
@property (retain, nonatomic) AWECodeGenAppendPlaylistModel *appendPlaylistInfoModel;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
