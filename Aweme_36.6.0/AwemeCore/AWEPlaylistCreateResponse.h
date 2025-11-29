@class NSString, AWEPlaylistInfoModel, AWEPlaylistStatusModel;

@interface AWEPlaylistCreateResponse : AWEBaseApiModel

@property (copy, nonatomic) NSString *playlistId;
@property (retain, nonatomic) AWEPlaylistInfoModel *playlistInfo;
@property (retain, nonatomic) AWEPlaylistStatusModel *statusInfo;

+ (id)statusInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
