@class NSString, NSArray, AWEPadPMCCardExtraModel;

@interface AWEPadPMCEpisodeCardModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *episodeID;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *seasonID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *coverUrl;
@property (copy, nonatomic) NSString *labelInfo;
@property (copy, nonatomic) NSString *currentPeriod;
@property (nonatomic) long long ownerUserID;
@property (nonatomic) long long episodeStage;
@property (nonatomic) long long episodeType;
@property (nonatomic) long long episodeSubType;
@property (nonatomic) long long progress;
@property (nonatomic) long long seasonType;
@property (retain, nonatomic) NSArray *horizontalCoverX2;
@property (retain, nonatomic) NSArray *verticalCoverX2;
@property (nonatomic) long long seasonUpdateStatus;
@property (nonatomic) long long latestPeriod;
@property (nonatomic) double ratingScore;
@property (nonatomic) BOOL collected;
@property (retain, nonatomic) AWEPadPMCCardExtraModel *extraModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
