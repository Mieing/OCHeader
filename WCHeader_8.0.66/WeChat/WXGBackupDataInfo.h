@class NSString, NSArray, BakChatMsgList, NSMutableArray;

@interface WXGBackupDataInfo : NSObject

@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (retain, nonatomic) NSString *sessionName;
@property (retain, nonatomic) NSString *msgListID;
@property (retain, nonatomic) BakChatMsgList *bakChatMsgList;
@property (retain, nonatomic) NSMutableArray *bakChatMsgWrapList;
@property (retain, nonatomic) NSArray *bigDataArray;
@property (retain, nonatomic) NSArray *mediaDataArray;
@property (retain, nonatomic) NSArray *mediaIDArray;
@property (retain, nonatomic) NSString *nickName;
@property (nonatomic) int dataInfoSize;
@property (nonatomic) int limitMsgCount;
@property (retain, nonatomic) NSMutableArray *limitMsgTypeArray;
@property (nonatomic) BOOL needMedia;
@property (retain, nonatomic) NSArray *needMediaTypeArray;
@property (nonatomic) BOOL fromOldToNew;
@property (nonatomic) BOOL filterMsgForChatSync;
@property (nonatomic) long long mediaFormatSupport;

- (id)init;
- (void).cxx_destruct;

@end
