@class NSString;

@interface AWEPlaylistStatusModel : AWEBaseApiModel

@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) NSString *err_reason;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithMiniLunaStatus:(unsigned long long)a0;
- (void).cxx_destruct;

@end
