@class NSString, FlowIMBgImgInfo, FlowIMFirstMet;

@interface FlowIMCreateBotRequestOptions : NSObject {
    void /* function */ name;
    void /* function */ desc;
    void /* function */ iconUri;
    void /* function */ voiceId;
    void /* function */ languageCode;
    void /* function */ createChannel;
    void /* function */ bgImageUri;
    void /* function */ userBotGenderStarlingKey;
    void /* function */ userBotTypeStarlingKey;
    void /* function */ originalUserImgUri;
    void /* function */ bio;
    void /* unknown type, empty encoding */ creationIdInfo;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *desc;
@property (nonatomic, readonly) NSString *iconUri;
@property (nonatomic, readonly) long long visibilityStatus;
@property (nonatomic, readonly) NSString *voiceId;
@property (nonatomic, readonly) BOOL isUGCVoice;
@property (nonatomic, readonly) NSString *languageCode;
@property (nonatomic, readonly) BOOL useBotEnrich;
@property (nonatomic, readonly) BOOL enableWebSearch;
@property (nonatomic, readonly) BOOL enablePicGen;
@property (nonatomic, readonly) FlowIMFirstMet *firstMet;
@property (nonatomic, readonly) BOOL useBotEnrichEdit;
@property (nonatomic, readonly) NSString *createChannel;
@property (nonatomic, readonly) NSString *bgImageUri;
@property (nonatomic, readonly) NSString *userBotGenderStarlingKey;
@property (nonatomic, readonly) NSString *userBotTypeStarlingKey;
@property (nonatomic, readonly) FlowIMBgImgInfo *bgImgInfo;
@property (nonatomic, readonly) NSString *originalUserImgUri;
@property (nonatomic, readonly) NSString *bio;

- (void).cxx_destruct;
- (id)init;

@end
