@class AWEChallengeInterveneAdModel, NSString, NSDictionary, AWEChallengeInterveneHotSpotInfoModel;

@interface AWEVideoInputSuggestionModel : MTLModel

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSString *queryID;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) long long count;
@property (nonatomic) unsigned long long hashTagType;
@property (retain, nonatomic) AWEChallengeInterveneAdModel *adData;
@property (retain, nonatomic) NSDictionary *logPassback;
@property (nonatomic) BOOL newTag;
@property (retain, nonatomic) AWEChallengeInterveneHotSpotInfoModel *hotSpotInfo;
@property (nonatomic) BOOL isTypingModle;
@property (nonatomic) unsigned long long challengeTagType;
@property (nonatomic) BOOL isHistoryTagByLocaldata;
@property (copy, nonatomic) NSString *rawQuery;
@property (nonatomic) long long hashtagChannel;

- (void).cxx_destruct;

@end
