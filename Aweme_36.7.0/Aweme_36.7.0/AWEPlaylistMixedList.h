@class NSString, AWEPlaylistInfoModel;

@interface AWEPlaylistMixedList : AWEBaseApiModel

@property (copy, nonatomic) NSString *itemType;
@property (readonly, nonatomic) unsigned long long type;
@property (retain, nonatomic) AWEPlaylistInfoModel *playlistInfo;

+ (id)playlistInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
