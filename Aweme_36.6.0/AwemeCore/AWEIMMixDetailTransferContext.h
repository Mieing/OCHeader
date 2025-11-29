@class AWEIMMessageConversation, NSString, AWEIMMixImageMessage, NSDictionary;

@interface AWEIMMixDetailTransferContext : NSObject

@property (retain, nonatomic) AWEIMMessageConversation *con;
@property (copy, nonatomic) NSString *conversationID;
@property (retain, nonatomic) AWEIMMixImageMessage *message;
@property (nonatomic) long long messageID;
@property (copy, nonatomic) NSString *clientMessageID;
@property (nonatomic) BOOL enableMediaBrowser;
@property (copy, nonatomic) id /* block */ remindFriendBlock;
@property (retain, nonatomic) NSDictionary *trackExtra;

- (void).cxx_destruct;

@end
