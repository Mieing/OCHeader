@class NSString;

@interface AWEMusicLeaderboardInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *leaderboardID;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long rank;
@property (copy, nonatomic) NSString *schemaURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
