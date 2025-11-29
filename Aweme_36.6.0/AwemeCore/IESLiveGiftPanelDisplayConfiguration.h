@class NSArray, NSDictionary, NSString, NSNumber;

@interface IESLiveGiftPanelDisplayConfiguration : NSObject

@property (copy, nonatomic) NSArray *toUsers;
@property (nonatomic) BOOL allMic;
@property (retain, nonatomic) NSDictionary *extraTrackDict;
@property (retain, nonatomic) NSNumber *preSelectGiftId;
@property (retain, nonatomic) NSString *showFrom;
@property (retain, nonatomic) NSString *buffSource;
@property (copy, nonatomic) NSDictionary *giftSendExtra;
@property (copy, nonatomic) NSDictionary *tagsExtra;
@property (retain, nonatomic) NSNumber *preSelectBuffCardLevel;
@property (copy, nonatomic) NSString *propRefId;
@property (copy, nonatomic) NSString *preSelectCardName;
@property (copy, nonatomic) NSString *traySchemaUrl;
@property (nonatomic) long long fromType;
@property (nonatomic) unsigned long long pageType;
@property (retain, nonatomic) NSString *showFromForApi;
@property (retain, nonatomic) NSString *sendTimes;
@property (nonatomic) BOOL disableRecipientEntrance;
@property (nonatomic) BOOL isFromFetchGiftList;
@property (copy, nonatomic) id /* block */ handleSelectGiftError;
@property (copy, nonatomic) id /* block */ onHideCompletion;
@property (retain, nonatomic) NSNumber *lastSendedGiftID;
@property (nonatomic) long long lastSendedGiftPageType;
@property (nonatomic) double enterRoomTimePoint;
@property (copy, nonatomic) NSString *lastPreloadLogId;
@property (nonatomic) long long panelOpenTimes;

+ (id)defaultConfiguration;

- (void).cxx_destruct;

@end
