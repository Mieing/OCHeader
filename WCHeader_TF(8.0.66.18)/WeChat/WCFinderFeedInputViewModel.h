@class NSString, CEmoticonWrap, WCFinderComment, UIImage, WCFinderContact;

@interface WCFinderFeedInputViewModel : NSObject <WCFinderFeedInputCommentPostDelegate>

@property (retain, nonatomic) WCFinderContact *currentFinderContact;
@property (nonatomic) int viewSceneForReport;
@property (copy, nonatomic) NSString *tid;
@property (copy, nonatomic) NSString *nonceID;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned long long identitySwitchType;
@property (nonatomic) int postScene;
@property (retain, nonatomic) WCFinderComment *replyComment;
@property (retain, nonatomic) CEmoticonWrap *currentSelectedEmoticon;
@property (retain, nonatomic) UIImage *currentSelectedImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTid:(id)a0 nonceID:(id)a1 currentFinderContact:(id)a2;
- (unsigned long long)readIdentifyScene;
- (void)updateCurrentCommentScene;
- (void)updateGetCommentScene:(int)a0;
- (void)asyncGenPostCommentWithContent:(id)a0 emoticon:(id)a1 image:(id)a2 completion:(id /* block */)a3;
- (id)generatePostCommentWithContent:(id)a0;
- (id)currentUserName;
- (id)currentUserHeadURL;
- (id)currentUserNickName;
- (void)feedInputViewPostComment:(id)a0 withReplyComment:(id)a1;
- (void).cxx_destruct;

@end
