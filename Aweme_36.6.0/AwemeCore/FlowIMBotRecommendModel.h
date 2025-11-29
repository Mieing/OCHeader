@class NSString, FlowIMCreatorInfo, FlowIMImageModelDataModel, FlowIMBotStats, FlowIMBotInfoModel;

@interface FlowIMBotRecommendModel : NSObject {
    void /* function */ title;
    void /* unknown type, empty encoding */ searchHightLightInfos;
    void /* function */ requestId;
    void /* function */ recommendFrom;
    void /* function */ emptySubtitlePlaceHolder;
    void /* function */ queryType;
    void /* unknown type, empty encoding */ tagId;
    void /* function */ tagName;
}

@property (nonatomic, readonly) NSString *sortId;
@property (nonatomic, readonly) NSString *botId;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) NSString *onboarding;
@property (nonatomic, readonly) FlowIMCreatorInfo *creatorInfo;
@property (nonatomic, readonly) FlowIMBotStats *botStats;
@property (nonatomic, readonly) FlowIMImageModelDataModel *iconImage;
@property (nonatomic, readonly) BOOL isDyBot;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) long long privateStatus;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL isCache;
@property (nonatomic) BOOL isSubscribed;
@property (nonatomic, retain) FlowIMBotInfoModel *botModel;
@property (nonatomic, copy) NSString *requestId;
@property (nonatomic, copy) NSString *recommendFrom;
@property (nonatomic, copy) NSString *emptySubtitlePlaceHolder;
@property (nonatomic, copy) NSString *queryType;
@property (nonatomic, copy) NSString *tagName;

- (id)toIMBot;
- (void)convertFromBot:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
