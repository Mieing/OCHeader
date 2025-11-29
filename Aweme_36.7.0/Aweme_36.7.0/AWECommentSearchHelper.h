@class AWECommentSearchViewController, NSString, NSTimer, UIViewController;
@protocol AWECommentSearchViewControllerProtocol, AWETextInput, AWECommentSearchHelperDelegate, AWETextInputControllerProtocol, AWECommentSearchParentViewController;

@interface AWECommentSearchHelper : NSObject <AWECommentSearchViewControllerDelegate, AWECommentSearchHelperProtocol>

@property (retain, nonatomic) NSTimer *searchThresholdTimer;
@property (nonatomic) BOOL textHasValidAt;
@property (readonly, nonatomic) AWECommentSearchViewController *dynamicSearchViewController;
@property (weak, nonatomic) id<AWECommentSearchHelperDelegate> delegate;
@property (weak, nonatomic) id<AWETextInput> textInput;
@property (weak, nonatomic) id<AWETextInputControllerProtocol> textInputController;
@property (weak, nonatomic) id<AWECommentSearchParentViewController> searchParentViewController;
@property (retain, nonatomic) UIViewController<AWECommentSearchViewControllerProtocol> *searchViewController;
@property (nonatomic) BOOL displayingSearch;
@property (nonatomic) BOOL displayingMusicSearch;
@property (nonatomic) BOOL searchAnimating;
@property (nonatomic) BOOL isAddingUser;
@property (nonatomic) BOOL isDeletingUser;
@property (nonatomic) BOOL isAvoidHashtag;
@property (nonatomic) long long indexForUserPositionInMentionShowList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (id)referString;
- (id)generalModel;
- (unsigned long long)inputViewExternSceneForTrack;
- (void)startSearchingUser;
- (void)endSearchingUser;
- (void)clearSearchCache;
- (void)trackSendCommentWithAt;
- (void)reloadList;
- (long long)numberOfAtUser;
- (void)didSelectSearchResult:(id)a0 trackInfo:(id)a1;
- (id)getCommentAtTrackInfo;
- (BOOL)needShowSendToIMEntrance;
- (void)showSearchViewController;
- (void)dismissSearchViewController:(BOOL)a0;
- (id)currentSearchKeywordRange;
- (BOOL)isInputDoubleSpace:(long long)a0;
- (void)onSearchTimer;
- (id)getGeneralItemParams;
- (BOOL)string:(id)a0 isSpaceAtIndex:(long long)a1;
- (id)currentSearchKeyword;
- (void)didDeselectSearchResult:(id)a0;
- (void)didSendMessageToUser:(id)a0;
- (id)extraInfoList;
- (void)searchCompleteWithNoResult;
- (void)searchCompleteWithResult;
- (id)getTrackInfo;
- (void)resetStatus;
- (void).cxx_destruct;
- (void)textDidChange;

@end
