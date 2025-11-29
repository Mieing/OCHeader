@class NSString;

@interface FinderLiveCloseNotifyMsg : NSObject

@property (retain, nonatomic) NSString *funcMsgID;
@property (retain, nonatomic) NSString *tipsID;
@property (retain, nonatomic) NSString *feedID;
@property (retain, nonatomic) NSString *liveID;
@property (retain, nonatomic) NSString *revokeID;

- (id)initWithXmlContent:(id)a0;
- (void)parseWithXml:(id)a0;
- (void).cxx_destruct;

@end
