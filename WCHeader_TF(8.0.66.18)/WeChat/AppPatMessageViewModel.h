@class AppPatMessageRefreshContext, NSArray, PatMessageWrap;

@interface AppPatMessageViewModel : BaseMessageViewModel

@property (nonatomic) struct CGSize { double width; double height; } expandButtonSize;
@property (retain, nonatomic) AppPatMessageRefreshContext *refreshContext;
@property (readonly, nonatomic) PatMessageWrap *patMessageWrap;
@property (readonly, nonatomic) double textFontSize;
@property (readonly, nonatomic) unsigned long long parserType;
@property (nonatomic) BOOL needFold;
@property (retain, nonatomic) NSArray *patStylesArray;
@property (retain, nonatomic) NSArray *patBackgroundSizes;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (id)initWithMessageWrap:(id)a0 contact:(id)a1 chatContact:(id)a2;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)setReadFromIndexes:(id)a0 cellView:(id)a1;
- (BOOL)isRead;
- (BOOL)needCleanRefresh;
- (void)markCleanRefreshed;
- (void)updateTimeOffset:(double)a0 forContentId:(id)a1;
- (double)getTimeOffsetForContentId:(id)a0;
- (void).cxx_destruct;

@end
