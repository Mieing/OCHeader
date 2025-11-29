@class UIFont, NSString, BTReaderMsgSectionData, NSMutableArray;

@interface BTReaderHeaderItemCellViewModel : BTBaseItemCellViewModel

@property (retain, nonatomic) NSMutableArray *contactLabelStyles;
@property (nonatomic) struct CGSize { double width; double height; } contactLabelSize;
@property (retain, nonatomic) UIFont *contactLabelFont;
@property (nonatomic) double contactLabelMaxWidth;
@property (readonly, nonatomic) UIFont *timeLabelFont;
@property (readonly, nonatomic) NSString *rightTopWording;
@property (readonly, nonatomic) double headerWidth;
@property (readonly, nonatomic) BOOL isBrandLiving;
@property (readonly, nonatomic) BTReaderMsgSectionData *readerMsgSectionData;

- (void)updateWithMsgWrap:(id)a0 contact:(id)a1 viewWidth:(double)a2;
- (id)itemViewClassName;
- (double)viewHeight;
- (void)clearCache;
- (BOOL)isMsgTopRightUseRecReason;
- (void).cxx_destruct;

@end
