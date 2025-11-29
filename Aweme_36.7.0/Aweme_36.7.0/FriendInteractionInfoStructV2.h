@class NSMutableArray;

@interface FriendInteractionInfoStructV2 : GPBMessage

@property (retain, nonatomic) NSMutableArray *diggListArray;
@property (readonly, nonatomic) unsigned long long diggListArray_Count;
@property (retain, nonatomic) NSMutableArray *commentListArray;
@property (readonly, nonatomic) unsigned long long commentListArray_Count;
@property (nonatomic) BOOL commentHasMore;
@property (nonatomic) BOOL hasCommentHasMore;
@property (nonatomic) BOOL commentCursor;
@property (nonatomic) BOOL hasCommentCursor;
@property (nonatomic) long long interactionPanelType;
@property (nonatomic) BOOL hasInteractionPanelType;
@property (retain, nonatomic) NSMutableArray *diggPreloadUidListArray;
@property (readonly, nonatomic) unsigned long long diggPreloadUidListArray_Count;
@property (nonatomic) int viewPanelType;
@property (nonatomic) BOOL hasViewPanelType;

+ (id)descriptor;

@end
