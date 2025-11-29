@class AWEPlaylistStatusModel;

@interface AWEPlaylistUpdateResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWEPlaylistStatusModel *statusInfo;

+ (id)statusInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
