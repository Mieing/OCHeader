@class MPCommentMsg, NSMutableArray;

@interface MPCommentSectionData : NSObject

@property (retain, nonatomic) MPCommentMsg *commentMsg;
@property (retain, nonatomic) NSMutableArray *cellViewModelArray;

- (id)initWithMPCommentMsg:(id)a0 isMutiReplyEnable:(BOOL)a1;
- (void)initCellViewModelArray:(BOOL)a0;
- (void).cxx_destruct;

@end
