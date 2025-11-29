@class NSString, FTSMsgSearchMgr, NSArray;
@protocol FTSMsgSearchMgrDelegate;

@interface FTSMsgSearchResultHandler : NSObject

@property (weak, nonatomic) FTSMsgSearchMgr *searchMgr;
@property (retain, nonatomic) NSString *searchKey;
@property (retain, nonatomic) NSString *handleKey;
@property (retain, nonatomic) NSArray *arrSessionResultItem;
@property (weak, nonatomic) id<FTSMsgSearchMgrDelegate> callbackTarget;
@property (retain, nonatomic) NSString *limitUsername;
@property (nonatomic) unsigned int currentOffset;
@property (nonatomic) BOOL searchFinish;
@property (nonatomic) BOOL isRuning;
@property (nonatomic) unsigned int resultMsgCount;
@property (nonatomic) unsigned int memResultCount;

- (void)cancelSearch;
- (void)dealloc;
- (id)getSessionResultLimit:(unsigned int)a0;
- (id)getMsgResultLimit:(unsigned int)a0;
- (id)getAllResult;
- (void).cxx_destruct;

@end
