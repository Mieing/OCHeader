@class HTSLiveUser, NSString, GetChatMentionListResponse_UserDataMeta;

@interface IESLiveCommentMentionUserItem : NSObject

@property (retain, nonatomic) GetChatMentionListResponse_UserDataMeta *metaData;
@property (retain, nonatomic) HTSLiveUser *metaUser;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL online;
@property (copy, nonatomic) NSString *secUidStr;
@property (nonatomic) long long indexInList;
@property (nonatomic) BOOL loadingItem;

- (void).cxx_destruct;

@end
