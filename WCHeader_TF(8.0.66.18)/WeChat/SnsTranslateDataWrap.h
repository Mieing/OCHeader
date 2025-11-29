@class WCDataItem, WCUserComment, NSString;

@interface SnsTranslateDataWrap : NSObject

@property (retain, nonatomic) WCDataItem *m_dataItem;
@property (retain, nonatomic) WCUserComment *m_userComment;
@property (retain, nonatomic) NSString *m_dataItemTid;
@property (nonatomic) int iScene;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
