@class MsgImageSquareThumbView, NSString, NSIndexPath;

@interface FTSMsgSearchCell : FTSMsgCell

@property (retain, nonatomic) MsgImageSquareThumbView *m_thumbView;
@property (retain, nonatomic) NSString *m_detailText;
@property (nonatomic) BOOL m_isHadImageThumbView;
@property (retain, nonatomic) NSIndexPath *indexPath;

+ (unsigned int)calculateHeight:(unsigned int)a0;

- (void)initCellStyle;
- (void)updateStatus:(BOOL)a0;
- (id)getDetailTextWithMsgWrap:(id)a0;
- (void)layoutSubviews;
- (BOOL)checkIsImageCell;
- (void).cxx_destruct;

@end
