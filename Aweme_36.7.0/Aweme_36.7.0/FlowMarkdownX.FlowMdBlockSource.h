@class NSArray, NSAttributedString, NSString;

@interface FlowMarkdownX.FlowMdBlockSource : NSObject {
    void /* unknown type, empty encoding */ size;
    void /* unknown type, empty encoding */ lastGlyphRectInMarkdownView;
    void /* function */ contentRects;
    void /* unknown type, empty encoding */ direction;
    void /* function */ uniqueId;
}

@property (nonatomic) long long indentLevel;
@property (nonatomic) double indentWidth;
@property (nonatomic, retain) NSAttributedString *listItemMarker;
@property (nonatomic, copy) NSArray *contentRects;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic, copy) NSString *uniqueId;
@property (nonatomic, readonly) NSString *renderString;
@property (nonatomic) BOOL isStable;
@property (nonatomic) long long unstableIndex;

- (void)copyParentPropertyFrom:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
