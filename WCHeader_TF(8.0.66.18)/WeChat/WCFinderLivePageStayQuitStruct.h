@class NSString, NSMutableDictionary;

@interface WCFinderLivePageStayQuitStruct : NSObject

@property (nonatomic) unsigned long long clientTime;
@property (retain, nonatomic) NSString *pageId;
@property (retain, nonatomic) NSString *tabId;
@property (retain, nonatomic) NSString *subTabId;
@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSString *contextId;
@property (retain, nonatomic) NSString *clickTabContextId;
@property (retain, nonatomic) NSString *clickSubTabContextId;
@property (retain, nonatomic) NSString *pageUdfKv;
@property (retain, nonatomic) NSString *commentScene;
@property (retain, nonatomic) NSMutableDictionary *switchExtraDic;

- (id)toReport;
- (void).cxx_destruct;

@end
