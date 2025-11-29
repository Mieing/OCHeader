@class NSString, AWEAwemeModel, NSURL, AWELocalMomentNotesInfo;
@protocol AWEIMCustomQuickReplyControllerHandlerPortocol;

@interface AFDCloseFriendsNotesReplyViewModel : NSObject

@property (retain, nonatomic) AWELocalMomentNotesInfo *notesInfo;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *uid;
@property (nonatomic) BOOL hasDigged;
@property (retain, nonatomic) id<AWEIMCustomQuickReplyControllerHandlerPortocol> imQuickReplyHandler;
@property (copy, nonatomic) NSString *preferredName;
@property (retain, nonatomic) NSURL *avatarURL;
@property (retain, nonatomic) AWEAwemeModel *preloadItem;
@property (copy, nonatomic) id /* block */ retryFetchBlock;
@property (copy, nonatomic) id /* block */ didLikeBlock;

- (void)trackShow;
- (void)trackVideoPlay;
- (void)updateAwemeModel:(id)a0;
- (void)sendMessageWithText:(id)a0;
- (id)initWithNotesInfo:(id)a0 uid:(id)a1;
- (void)trackNewSendMessageEvent;
- (BOOL)shouldSendMessage;
- (void)onLikeButtonTapped:(id)a0;
- (void)trackMomentLikeEventWith:(long long)a0;
- (void)trackLikeEventWith:(long long)a0;
- (void)trackSendMessageFailed;
- (id)getNotesTypeString;
- (void).cxx_destruct;

@end
