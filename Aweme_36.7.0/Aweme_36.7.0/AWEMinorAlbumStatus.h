@class NSString;

@interface AWEMinorAlbumStatus : MTLModel <MTLJSONSerializing, AWEMinorAlbumStatusProtocol>

@property (nonatomic) long long currentEpisode;
@property (nonatomic) long long totalEpisodes;
@property (nonatomic) long long recordEpisode;
@property (nonatomic) long long progress;
@property (nonatomic) long long playTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *recordEpisodeID;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
