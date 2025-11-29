@class AWEIMMessageConversation, AWEIMMixImageMessage;

@interface AWEIMMixPhotoStopContext : AWEIMMixPhotoCommonJobContext

@property (retain, nonatomic) AWEIMMessageConversation *con;
@property (retain, nonatomic) AWEIMMixImageMessage *message;

- (void).cxx_destruct;
- (id)description;

@end
