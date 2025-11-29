@class NSString, CMessageWrap;

@interface FTSMsgItem : NSObject

@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int localId;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) NSString *ftsContent;
@property (retain, nonatomic) CMessageWrap *msgWrap;
@property (nonatomic) BOOL isInvalid;

- (long long)compareMsgItemAscending:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
