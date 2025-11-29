@class AWEIMMessage, NSAttributedString;

@interface AWEIMChapterShareBubbleViewModel : NSObject {
    double _maxTextWidth;
    struct CGSize { double width; double height; } _bubbleViewSize;
}

@property (retain, nonatomic) NSAttributedString *titleAttributedString;
@property (retain, nonatomic) NSAttributedString *subTitleAttributedString;
@property (retain, nonatomic) NSAttributedString *chapterCopyString;
@property (retain, nonatomic) AWEIMMessage *message;
@property (nonatomic) unsigned long long chapterAvailable;
@property (nonatomic) double subTitleHeight;
@property (nonatomic) double subTitleWidth;

+ (id)formatTimestamp:(long long)a0;

- (void)p_initValues;
- (void)p_configTitleAttributeStr;
- (void)p_configSubTitleAttributeStr;
- (void)p_configCopyAttributeStr;
- (void)p_calculateBubbleSize;
- (id)p_titleAttributeDict;
- (id)p_processLimitString:(id)a0 second:(id)a1 withLimit:(double)a2 attributes:(id)a3 maxNumOfLines:(long long)a4;
- (id)chapterString;
- (id)p_subTitleAttributeDict;
- (double)textLeadingSpacing;
- (double)textTopSpacing;
- (id)initWithMessage:(id)a0 chapterAvailable:(unsigned long long)a1;
- (void)updateWithMessage:(id)a0 chapterAvailable:(unsigned long long)a1;
- (struct CGSize { double x0; double x1; })sizeOfBubbleView;
- (long long)titleNumOfLine;
- (long long)subTitleNumOfLine;
- (void).cxx_destruct;

@end
