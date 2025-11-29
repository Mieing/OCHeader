@class NSString, AWELVideoPaymentInfo;

@interface AWEVideoHallHistoryInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *albumId;
@property (copy, nonatomic) NSString *episodeId;
@property (nonatomic) long long seq;
@property (copy, nonatomic) NSString *coverUrl;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long progress;
@property (nonatomic) long long msec;
@property (copy, nonatomic) NSString *schemeUrl;
@property (nonatomic) long long playTime;
@property (nonatomic) long long purchaseStatus;
@property (nonatomic) long long expiredTime;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *titleBefore;
@property (copy, nonatomic) NSString *titleAfter;
@property (nonatomic) BOOL hasUpdate;
@property (copy, nonatomic) NSString *updatedEpisode;
@property (nonatomic) BOOL isFirstPlay;
@property (copy, nonatomic) NSString *eventTracking;
@property (copy, nonatomic) NSString *showPackRespJson;
@property (copy, nonatomic) NSString *episodeItemId;
@property (nonatomic) long long episodeType;
@property (nonatomic) long long itemType;
@property (nonatomic) long long label;
@property (nonatomic) long long duration;
@property (copy, nonatomic) NSString *episodeLookAt;
@property (retain, nonatomic) AWELVideoPaymentInfo *paymentInfo;
@property (nonatomic) long long albumTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
