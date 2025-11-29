@class NSArray, NSString, AWESearchGlobalDoodleConfigModel, NSNumber;

@interface RTVVoipRingtoneSearchMusicResponse : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *musicList;
@property (retain, nonatomic) NSArray *musics;
@property (retain, nonatomic) AWESearchGlobalDoodleConfigModel *extraModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extraModelJSONTransformer;
+ (id)hasMoreJSONTransformer;
+ (id)musicsJSONTransformer;
+ (id)musicListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
