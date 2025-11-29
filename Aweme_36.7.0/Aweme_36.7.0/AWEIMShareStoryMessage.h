@class NSString, AWEIMTextMessage, AWEVideoModel, AWEURLModel;

@interface AWEIMShareStoryMessage : AWEIMMessage <AWEIMMessageConfigProtocol, AWEIMFeedMediaDisplayable>

@property (retain, nonatomic) NSString *storyComment;
@property (retain, nonatomic) NSString *storyID;
@property (retain, nonatomic) AWEURLModel *storyCoverURL;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) BOOL syncAweme;
@property (nonatomic) struct CGSize { double width; double height; } commentSize;
@property (retain, nonatomic) AWEIMTextMessage *commentTextMsg;
@property (readonly, nonatomic) NSString *storyCoverMD5;
@property (retain, nonatomic) AWEVideoModel *videoModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (BOOL)isAllowedEmojiReply;
- (id)makeFeedMediaDisplayModel;
- (BOOL)isStoryVideo;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;

@end
