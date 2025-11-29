@class FinderObjectMonotonicData, NSData, ProductCommentInfo, FinderPresentHalfSheetInfo, BaseResponse, FinderObjectCountInfo, CommentNewLifeInfo, NSMutableArray, FinderCommentSectionPromptInfo, FinderCommentSortCtrl, FinderCommentInfo;

@interface FinderGetCommentListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *commentInfo;
@property (retain, nonatomic) FinderObjectCountInfo *countInfo;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int upContinueFlag;
@property (nonatomic) unsigned int downContinueFlag;
@property (retain, nonatomic) FinderCommentInfo *descComment;
@property (retain, nonatomic) FinderObjectMonotonicData *monotonicData;
@property (retain, nonatomic) ProductCommentInfo *productCommentinfo;
@property (retain, nonatomic) CommentNewLifeInfo *newlifeInfo;
@property (nonatomic) unsigned long long requestId;
@property (retain, nonatomic) FinderCommentSectionPromptInfo *promptInfo;
@property (retain, nonatomic) FinderCommentSortCtrl *sortCtrl;
@property (retain, nonatomic) FinderPresentHalfSheetInfo *halfSheetInfo;
@property (retain, nonatomic) NSMutableArray *emojiDescComments;
@property (retain, nonatomic) NSMutableArray *descComments;
@property (nonatomic) unsigned long long optionFlag;

+ (void)initialize;

@end
