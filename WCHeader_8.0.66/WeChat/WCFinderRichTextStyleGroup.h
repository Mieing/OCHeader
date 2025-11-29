@class WCFinderRichTextRenderedStyle;

@interface WCFinderRichTextStyleGroup : NSObject <NSCopying>

@property (nonatomic) unsigned long long styleHash;
@property (nonatomic) double width;
@property (retain, nonatomic) WCFinderRichTextRenderedStyle *textStyle;
@property (retain, nonatomic) WCFinderRichTextRenderedStyle *suffixStyle;
@property (nonatomic) BOOL showExpandClosure;

+ (id)empty;
+ (id)make:(id)a0 styleHash:(unsigned long long)a1 suffixConfig:(id)a2 content:(id)a3 closureContent:(id)a4 expandWording:(id)a5 width:(double)a6 isExpanded:(BOOL)a7 showExpand:(BOOL)a8 alwaysDisplayExpand:(BOOL)a9 expandColor:(id)a10 lineNumber:(long long)a11 expandedLineNumber:(long long)a12;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)styleWidth;
- (double)styleHeight:(double)a0;
- (void).cxx_destruct;

@end
