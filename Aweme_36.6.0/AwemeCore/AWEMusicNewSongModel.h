@class NSString, NSArray, AWEMusicNewChorusModel;

@interface AWEMusicNewSongModel : AWEBaseDataModel

@property (nonatomic) long long id;
@property (copy, nonatomic) NSString *songID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *artists;
@property (retain, nonatomic) AWEMusicNewChorusModel *chorus;
@property (copy, nonatomic) NSArray *chorusV3InfosModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
