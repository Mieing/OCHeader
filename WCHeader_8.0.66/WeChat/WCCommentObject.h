@class NSString, WCCommentUniCommentInfo, WCCommentObjectFinderInfo;

@interface WCCommentObject : NSObject <MusicInteractionStatistics>

@property (readonly, nonatomic) NSString *musicInteractionidentifier;
@property (readonly, nonatomic) unsigned long long commentCount;
@property (readonly, nonatomic) unsigned long long likeCount;
@property (readonly, nonatomic) unsigned long long forwardCount;
@property (readonly, nonatomic) BOOL isSelfLiked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long obejctType;
@property (nonatomic) unsigned long long commentCount;
@property (nonatomic) unsigned long long likeCount;
@property (nonatomic) unsigned long long forwardCount;
@property (nonatomic) BOOL isSelfLiked;
@property (retain, nonatomic) WCCommentUniCommentInfo *uniCommentInfo;
@property (retain, nonatomic) WCCommentObjectFinderInfo *finderInfo;

- (BOOL)isValidMusicInteractionStatistics;
- (id)commentObjectId;
- (void).cxx_destruct;

@end
