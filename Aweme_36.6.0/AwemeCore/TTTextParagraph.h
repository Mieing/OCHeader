@class NSString, TTEpubChapter;

@interface TTTextParagraph : NSObject {
    void *chapter_;
}

@property (retain, nonatomic) NSString *content;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (nonatomic) unsigned long long paragraphIndex;
@property (retain, nonatomic) TTEpubChapter *chapter;
@property (retain, nonatomic) id extra;

- (id)initWithChapter:(void *)a0 Index:(int)a1;
- (id)getContent;
- (void)ModifyTextStyleRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 Color:(int)a1 Bold:(BOOL)a2 Italic:(BOOL)a3;
- (void)ModifyTextStyleRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 Bold:(BOOL)a1 Italic:(BOOL)a2;
- (void).cxx_destruct;

@end
