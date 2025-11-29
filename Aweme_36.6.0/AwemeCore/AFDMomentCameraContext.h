@class NSString, NSArray, NSMutableDictionary, NSNumber;

@interface AFDMomentCameraContext : NSObject

@property (retain, nonatomic) NSNumber *activityVideoType;
@property (copy, nonatomic) NSString *activityExtraJson;
@property (nonatomic) BOOL shouldHideCaptureBtn;
@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL isStayCamera;
@property (nonatomic) BOOL isCalendarPath;
@property (nonatomic) BOOL isOnlyExchangeLocation;
@property (nonatomic) BOOL isOnlyRandomAlbum;
@property (nonatomic) BOOL isExchangeContents;
@property (nonatomic) BOOL isIMExchange;
@property (nonatomic) BOOL shouldRecordPublishHistory;
@property (copy, nonatomic) NSString *messageID;
@property (nonatomic) long long quoteServerMessageID;
@property (nonatomic) long long groupExchangeBatchID;
@property (nonatomic) long long groupExchangeBatchUserCount;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *relationTag;
@property (copy, nonatomic) NSString *entrance;
@property (nonatomic) unsigned long long quoteRequestMessageType;
@property (copy, nonatomic) NSString *quoteRequestItemID;
@property (retain, nonatomic) NSArray *originQuoteRequestUsers;
@property (retain, nonatomic) NSArray *panelSelectedUsers;
@property (copy, nonatomic) NSArray *panelSelectedGroupIDs;
@property (retain, nonatomic) NSMutableDictionary *extraDict;
@property (nonatomic) BOOL isLivePhoto;
@property (retain, nonatomic) NSString *filePath;
@property (nonatomic) unsigned long long recheckScene;
@property (nonatomic) double recheckTimeStamp;

- (void).cxx_destruct;

@end
