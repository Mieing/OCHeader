@class UIFont, NSDateFormatter, NSMutableParagraphStyle;

@interface AWEProfileWaterfallHelper : NSObject

@property (retain, nonatomic) NSDateFormatter *durationFormater;
@property (retain, nonatomic) NSDateFormatter *fullDurationFormater;
@property (nonatomic) long long thisYear;
@property (retain, nonatomic) NSDateFormatter *dateFormater;
@property (retain, nonatomic) NSDateFormatter *fullDateFormater;
@property (retain, nonatomic) NSMutableParagraphStyle *titleStyle;
@property (retain, nonatomic) NSMutableParagraphStyle *displayTitleStyle;
@property (readonly, nonatomic) UIFont *titleFont;

+ (double)cellRadius;
+ (Class)aAWEPostWorkViewControllerAdapterClass;
+ (id)shareInstance;

- (struct CGSize { double x0; double x1; })calculateImageSize:(id)a0 cellWidth:(double)a1;
- (id)formatDateString:(id)a0;
- (id)descriptionStringWithModel:(id)a0;
- (double)landscapeImageHeight:(double)a0;
- (double)calculateCellHeight:(unsigned long long)a0 model:(id)a1 cellWidth:(double)a2 isMine:(BOOL)a3 InteractionTopPadding:(double)a4;
- (id)truncatedTitle:(id)a0 cellWidth:(double)a1;
- (struct CGSize { double x0; double x1; })titleSizeWithContent:(id)a0 cellWidth:(double)a1;
- (double)portraitImageHeight:(double)a0;
- (BOOL)showInteractionHeight:(unsigned long long)a0 model:(id)a1 isMine:(BOOL)a2;
- (id)getProhibitedText:(id)a0;
- (id)aAWEPostWorkViewControllerAdapter;
- (id)formatDurationString:(id)a0;
- (void).cxx_destruct;
- (double)titleLineHeight;

@end
