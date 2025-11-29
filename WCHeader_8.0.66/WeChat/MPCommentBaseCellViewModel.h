@class MPCommentMsg, NSString, NSMutableArray;

@interface MPCommentBaseCellViewModel : NSObject {
    double _viewHeight;
    NSMutableArray *_contentLabelStyles;
    struct CGSize { double width; double height; } _contentLabelSize;
}

@property (retain, nonatomic) MPCommentMsg *commentMsg;
@property (nonatomic) double viewWidth;
@property (nonatomic) BOOL isLastItem;
@property (readonly, nonatomic) double viewHeight;
@property (readonly, nonatomic) double replyContentHeight;
@property (readonly, copy, nonatomic) NSString *content;
@property (readonly, copy, nonatomic) NSString *nickname;
@property (readonly, copy, nonatomic) NSString *headImageUrl;
@property (readonly, nonatomic) NSMutableArray *contentLabelStyles;
@property (readonly, nonatomic) BOOL isSelected;
@property (readonly, nonatomic) BOOL isLike;
@property (readonly, nonatomic) unsigned int likeCount;
@property (readonly, nonatomic) double headerMargin;
@property (readonly, nonatomic) double labelMaxWidth;

- (id)initWithMPCommentMsg:(id)a0;
- (id)creatCommentCellView;
- (id)cellViewClassName;
- (void)clearLabelStyles;
- (void)switchThumbsUpStatus;
- (void).cxx_destruct;

@end
