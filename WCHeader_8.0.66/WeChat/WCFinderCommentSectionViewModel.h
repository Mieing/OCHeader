@class NSString, NSMutableSet, WCFinderComment, NSData, NSError;

@interface WCFinderCommentSectionViewModel : NSObject

@property (retain, nonatomic) WCFinderComment *rootComment;
@property (retain, nonatomic) NSMutableSet *subCommentIDSet;
@property (nonatomic) long long commentID;
@property (copy, nonatomic) NSString *clientID;
@property (nonatomic) BOOL showSubCommentList;
@property (nonatomic) unsigned long long expandCommentCount;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL upContinueFlag;
@property (nonatomic) BOOL downContinueFlag;
@property (readonly, nonatomic) unsigned long long subCommentCount;
@property (nonatomic) unsigned long long sectionViewType;
@property (copy, nonatomic) NSString *sectionDescriptionStr;
@property (nonatomic) BOOL shouldHideMoreCommentCount;
@property (nonatomic) BOOL onlyShowServiceSubComment;
@property (nonatomic) double commentVideoBeginPos;
@property (nonatomic) unsigned long long cgiCostTime;
@property (nonatomic) unsigned long long downloadStartTime;
@property (nonatomic) unsigned long long downloadFinishTime;
@property (retain, nonatomic) NSError *downloadError;
@property (nonatomic) BOOL hasExposed;
@property (nonatomic) BOOL needReCalCellH;

+ (id)commentSectionViewModelWithRootComment:(id)a0;

- (id)getFinderCommentWithIndex:(unsigned long long)a0;
- (id)getFinderCommentWithCommentID:(unsigned long long)a0;
- (id)getRootComment;
- (unsigned long long)getCommentCellTypeWithIndex:(unsigned long long)a0;
- (long long)getMoreCommentTypeIndex:(unsigned long long)a0;
- (unsigned long long)numberOfComment;
- (BOOL)removeSubCommentWithCommentID:(long long)a0;
- (void)replaceRootCommentByPostSuccessful:(id)a0;
- (double)extraHeightWithIndex:(unsigned long long)a0;
- (id)addSubComments:(id)a0 direction:(unsigned long long)a1 continueFlag:(BOOL)a2;
- (unsigned long long)getLastSubCommentIndex;
- (void)addPostComment:(id)a0;
- (BOOL)postCommentSuccessful:(id)a0;
- (BOOL)postCommentFailure:(id)a0;
- (void)changeCommentBlackListFlagComment:(id)a0 isInBlackList:(BOOL)a1;
- (long long)getIndexWithCommentID:(unsigned long long)a0;
- (unsigned long long)levelTwoCommentCount;
- (void).cxx_destruct;

@end
