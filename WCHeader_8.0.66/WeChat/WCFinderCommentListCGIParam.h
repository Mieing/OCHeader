@class NSData, NSString, FinderGetCommentListCtx;

@interface WCFinderCommentListCGIParam : NSObject

@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long refCommentID;
@property (nonatomic) unsigned long long rootCommentID;
@property (retain, nonatomic) NSData *lastBuffer;
@property (copy, nonatomic) NSString *finderUsername;
@property (nonatomic) BOOL fetchObject;
@property (nonatomic) unsigned long long direction;
@property (nonatomic) int scene;
@property (copy, nonatomic) NSString *nonceID;
@property (nonatomic) unsigned long long identityScene;
@property (nonatomic) int pullScene;
@property (retain, nonatomic) NSData *likeListBuffer;
@property (retain, nonatomic) FinderGetCommentListCtx *commentCtx;
@property (retain, nonatomic) NSString *enterSessionId;
@property (nonatomic) unsigned long long sortType;
@property (nonatomic) unsigned long long selectedType;
@property (nonatomic) int contentType;

- (id)genRequest;
- (id)fullDescription;
- (void).cxx_destruct;

@end
