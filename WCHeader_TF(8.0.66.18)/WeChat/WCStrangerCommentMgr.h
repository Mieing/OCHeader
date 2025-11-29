@class MyWCDB;

@interface WCStrangerCommentMgr : NSObject

@property (retain, nonatomic) MyWCDB *m_database;

- (void)dealloc;
- (void)addComment:(id)a0 toItem:(id)a1;
- (void)getStrangerCommentForDataItem:(id)a0 partner:(id)a1;
- (void).cxx_destruct;

@end
