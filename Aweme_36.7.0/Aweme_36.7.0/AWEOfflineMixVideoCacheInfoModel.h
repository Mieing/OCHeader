@class NSString, NSNumber;

@interface AWEOfflineMixVideoCacheInfoModel : NSObject <NSCoding>

@property (copy, nonatomic) NSString *mixID;
@property (copy, nonatomic) NSString *mixName;
@property (retain, nonatomic) NSNumber *currentEpisode;
@property (retain, nonatomic) NSNumber *lastEpisode;

- (id)initWithMixInfoModel:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
