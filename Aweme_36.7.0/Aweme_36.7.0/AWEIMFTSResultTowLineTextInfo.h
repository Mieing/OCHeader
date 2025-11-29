@class AWEIMFTSResultHighlightInfo;

@interface AWEIMFTSResultTowLineTextInfo : NSObject

@property (retain, nonatomic) AWEIMFTSResultHighlightInfo *firstLine;
@property (retain, nonatomic) AWEIMFTSResultHighlightInfo *secondLine;

- (BOOL)isTowLineStyle;
- (void).cxx_destruct;

@end
