@class NSString, NSDictionary, NSNumber;

@interface AWEIMFacePuzzleMessage : AWEIMMessage <AWEIMMessageConfigProtocol, NSCopying>

@property (copy, nonatomic) NSString *secExerciseUID;
@property (copy, nonatomic) NSString *secExerciseID;
@property (copy, nonatomic) NSString *secAnswerUID;
@property (copy, nonatomic) NSString *backgroundURL;
@property (copy, nonatomic) NSString *backgroundDarkURL;
@property (copy, nonatomic) NSString *headURL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *pushDetail;
@property (copy, nonatomic) NSDictionary *answerPic;
@property (copy, nonatomic) NSString *secExerciseAnswerID;
@property (copy, nonatomic) NSString *refURL;
@property (copy, nonatomic) NSString *refDarkURL;
@property (copy, nonatomic) NSNumber *exerciseConversationShortID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)userRole;
- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (id)quoteContentComponentName;
- (BOOL)isAllowedEmojiReply;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)hintOnInputVCWhenQuoted;
- (BOOL)isAllowedForward;
- (id)sendMessageAndResponseTrackerParams:(id)a0;
- (BOOL)isSupportForward;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)canShare;

@end
