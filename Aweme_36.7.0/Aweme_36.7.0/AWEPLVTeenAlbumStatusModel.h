@class NSString;

@interface AWEPLVTeenAlbumStatusModel : MTLModel <MTLJSONSerializing, AWEMinorAlbumStatusProtocol>

@property (nonatomic) long long currentEpisode;
@property (nonatomic) long long totalEpisodes;
@property (nonatomic) long long recordEpisode;
@property (nonatomic) long long progress;
@property (nonatomic) long long playTimes;
@property (copy, nonatomic) NSString *recordEpisodeID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
