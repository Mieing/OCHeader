@class NSString, AWEIMChatListServiceReadReceiptModel;

@interface AWEIMChatListServiceMessageModel : NSObject <NSCopying>

@property (copy) NSString *latestMessageID;
@property long long latestMessageCreateTime;
@property (copy) NSString *fromUID;
@property int messageState;
@property (retain) AWEIMChatListServiceReadReceiptModel *readReceiptModel;

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
