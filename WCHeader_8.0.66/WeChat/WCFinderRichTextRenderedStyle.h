@class NSMutableArray;

@interface WCFinderRichTextRenderedStyle : NSObject

@property (retain, nonatomic) NSMutableArray *styles;
@property (nonatomic) long long line;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) BOOL isNotEmpty;

+ (id)empty;
+ (id)renderWithConfig:(id)a0;

- (void).cxx_destruct;

@end
