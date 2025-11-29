@class AWEMusicSearchNilInfo, NSArray, NSDictionary, AWEEMusicSearchGlobalDoodleConfigModel, NSNumber;
@protocol AWESearchCorrectModelProtocol;

@interface AWEMusicSearchResponseModel : ACCBaseApiModel

@property (retain, nonatomic) NSArray *musics;
@property (retain, nonatomic) NSNumber *hasMore;
@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) NSArray *audios;
@property (retain, nonatomic) id<AWESearchCorrectModelProtocol> correctModel;
@property (retain, nonatomic) AWEMusicSearchNilInfo *nilInfo;
@property (retain, nonatomic) AWEEMusicSearchGlobalDoodleConfigModel *extraModel;
@property (copy, nonatomic) NSDictionary *streamTimeCost;

+ (id)extraModelJSONTransformer;
+ (id)musicsJSONTransformer;
+ (id)correctModelJSONTransformer;
+ (id)nilInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
