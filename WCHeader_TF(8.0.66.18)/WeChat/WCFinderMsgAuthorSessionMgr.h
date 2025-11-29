@class WCTDatabase, NSMutableDictionary, NSString;
@protocol ITableSessionStorageDelegate;

@interface WCFinderMsgAuthorSessionMgr : NSObject

@property (retain, nonatomic) WCTDatabase *sessionDB;
@property (retain, nonatomic) WCTDatabase *greetSessionDB;
@property (retain, nonatomic) NSMutableDictionary *authorSessionStorageDict;
@property (weak, nonatomic) id<ITableSessionStorageDelegate> delegate;
@property (copy, nonatomic) NSString *greetSessionId;

- (id)init;
- (void)dealloc;
- (id)initWithDelegate:(id)a0 greetSessionID:(id)a1;
- (id)getStorageForFinderUsername:(id)a0;
- (void)checkWithUsernameArray:(id)a0;
- (void)cleanAuthorSessionWithUsername:(id)a0;
- (id)storageWithUsername:(id)a0;
- (void).cxx_destruct;

@end
