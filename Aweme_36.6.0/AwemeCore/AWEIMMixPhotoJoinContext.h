@class AWEIMMessageConversation, NSString, AWEIMMixImageMessage, AWEIMMixPhotoInfo;

@interface AWEIMMixPhotoJoinContext : AWEIMMixPhotoCommonJobContext

@property (retain, nonatomic) AWEIMMessageConversation *con;
@property (retain, nonatomic) AWEIMMixImageMessage *message;
@property (copy, nonatomic) NSString *taskID;
@property (copy, nonatomic) NSString *stickerID;
@property (copy, nonatomic) NSString *stickerCoverURL;
@property (retain, nonatomic) AWEIMMixPhotoInfo *photoInfo;
@property (nonatomic) long long shareTaskId;
@property (copy, nonatomic) NSString *loraID;
@property (copy, nonatomic) NSString *loraStyleID;
@property (nonatomic) BOOL isLora;
@property (nonatomic) long long reflowMaxMembers;
@property (nonatomic) long long actionType;
@property (nonatomic) BOOL selectLora;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) id /* block */ didEnterVCBlock;

- (void).cxx_destruct;
- (id)description;

@end
