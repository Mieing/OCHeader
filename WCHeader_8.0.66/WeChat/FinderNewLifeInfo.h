@class FinderPostGuideInfo, NSString, FinderTopicInfo, NewLifeFollowPostInfo, NewLifeTagStreamInfo, ChatroomPushWording, NewLifeSearchWordingDesc, NSMutableArray, NewLifeBizMpGuestDesc, NewLifeBizPicturDesc;

@interface FinderNewLifeInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int newlifeType;
@property (retain, nonatomic) FinderPostGuideInfo *postGuideInfo;
@property (retain, nonatomic) FinderTopicInfo *topicInfo;
@property (retain, nonatomic) NewLifeBizPicturDesc *bizPictureDesc;
@property (retain, nonatomic) NSString *secretlyPushChatroomWording;
@property (retain, nonatomic) NSString *chatroomPushOnelineWording;
@property (retain, nonatomic) NSMutableArray *chatroomPushList;
@property (retain, nonatomic) ChatroomPushWording *chatroomPushWording;
@property (nonatomic) BOOL isNeedDisplayCommentEgg;
@property (retain, nonatomic) NSMutableArray *pictureCropInfo;
@property (retain, nonatomic) NewLifeSearchWordingDesc *searchWordingDesc;
@property (retain, nonatomic) NewLifeBizMpGuestDesc *bizMpGuestDesc;
@property (retain, nonatomic) NewLifeFollowPostInfo *followPostInfo;
@property (retain, nonatomic) NewLifeTagStreamInfo *tagStreamInfo;

+ (void)initialize;

- (void)setTagStreamInfo:(id)a0;
- (id)tagStreamInfo;
- (void)setFollowPostInfo:(id)a0;
- (id)followPostInfo;
- (void)setBizMpGuestDesc:(id)a0;
- (id)bizMpGuestDesc;
- (void)setSearchWordingDesc:(id)a0;
- (id)searchWordingDesc;
- (void)setPictureCropInfo:(id)a0;
- (id)pictureCropInfo;
- (void)setIsNeedDisplayCommentEgg:(BOOL)a0;
- (BOOL)isNeedDisplayCommentEgg;
- (void)setChatroomPushWording:(id)a0;
- (id)chatroomPushWording;
- (void)setChatroomPushList:(id)a0;
- (id)chatroomPushList;
- (void)setChatroomPushOnelineWording:(id)a0;
- (id)chatroomPushOnelineWording;
- (void)setSecretlyPushChatroomWording:(id)a0;
- (id)secretlyPushChatroomWording;
- (void)setBizPictureDesc:(id)a0;
- (id)bizPictureDesc;
- (void)setTopicInfo:(id)a0;
- (id)topicInfo;
- (void)setPostGuideInfo:(id)a0;
- (id)postGuideInfo;
- (void)setNewlifeType:(unsigned int)a0;
- (unsigned int)newlifeType;

@end
