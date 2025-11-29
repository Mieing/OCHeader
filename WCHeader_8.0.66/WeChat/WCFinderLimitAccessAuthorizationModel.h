@class UINavigationController, NSString, NSMutableDictionary, WCFinderShareListReportModel, MMFinderLiveRouterParams, WCFinderPushFeedViewParams;

@interface WCFinderLimitAccessAuthorizationModel : NSObject

@property (copy, nonatomic) NSString *encrytedObjectidTid;
@property (retain, nonatomic) UINavigationController *navVC;
@property (nonatomic) unsigned long long shareScene;
@property (retain, nonatomic) NSMutableDictionary *paraDic;
@property (retain, nonatomic) WCFinderPushFeedViewParams *funcParams;
@property (retain, nonatomic) WCFinderShareListReportModel *reportModel;
@property (nonatomic) int entryCardType;
@property (copy, nonatomic) NSString *feedId;
@property (copy, nonatomic) NSString *nonceId;
@property (copy, nonatomic) NSString *bizKey;
@property (retain, nonatomic) MMFinderLiveRouterParams *liveParams;

- (id)initWithFeedID:(id)a0 nonceID:(id)a1 currentNavController:(id)a2 enterScene:(unsigned long long)a3 customParam:(id)a4 functionalParams:(id)a5 reportModel:(id)a6 cardType:(int)a7;
- (id)initWithEncrytedObjectidTid:(id)a0 nonceID:(id)a1 currentNavController:(id)a2 enterScene:(unsigned long long)a3 customParam:(id)a4 functionalParams:(id)a5 reportModel:(id)a6 cardType:(int)a7;
- (void).cxx_destruct;

@end
