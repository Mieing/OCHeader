@class AWESearchNilTextModel, NSArray, NSNumber, AWESearchNilInfoModel;

@interface AWERankMusicResponse : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *musicList;
@property (retain, nonatomic) AWESearchNilInfoModel *searchNilInfoModel;
@property (retain, nonatomic) AWESearchNilTextModel *searchNilTextModel;

+ (id)hasMoreJSONTransformer;
+ (id)searchNilInfoModelTransformer;
+ (id)searchNilTextModelTransformer;
+ (id)musicListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
