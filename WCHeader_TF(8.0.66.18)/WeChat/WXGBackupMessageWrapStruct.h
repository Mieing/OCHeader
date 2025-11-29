@class NSArray, BakChatMsgItem;

@interface WXGBackupMessageWrapStruct : NSObject

@property (retain, nonatomic) BakChatMsgItem *bakchatMsgItem;
@property (retain, nonatomic) NSArray *mediaArray;
@property (nonatomic) long long msgSvrID;

- (void).cxx_destruct;

@end
