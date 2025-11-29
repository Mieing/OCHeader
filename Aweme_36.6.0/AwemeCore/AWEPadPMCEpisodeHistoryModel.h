@class NSString, NSNumber, AWEPadPMCEpisodeCardModel;

@interface AWEPadPMCEpisodeHistoryModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *showPackRespJson;
@property (nonatomic) long long progress;
@property (copy, nonatomic) NSString *coverUrl;
@property (retain, nonatomic) NSNumber *playTime;
@property (copy, nonatomic) NSString *albumID;
@property (copy, nonatomic) NSString *schemeURL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *episodeItemID;
@property (retain, nonatomic) AWEPadPMCEpisodeCardModel *episodeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
