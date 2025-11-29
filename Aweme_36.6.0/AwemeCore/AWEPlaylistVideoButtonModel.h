@class NSString;

@interface AWEPlaylistVideoButtonModel : AWEBaseApiModel

@property (nonatomic) unsigned long long playlistVideoButtonSwitch;
@property (copy, nonatomic) NSString *reason;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
