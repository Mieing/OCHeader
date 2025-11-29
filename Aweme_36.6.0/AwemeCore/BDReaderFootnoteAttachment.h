@class NSString;

@interface BDReaderFootnoteAttachment : NSObject

@property (copy, nonatomic) NSString *footnoteContent;
@property (copy, nonatomic) NSString *rawContent;
@property (copy, nonatomic) NSString *idref;
@property (retain, nonatomic) id extra;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } minYRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } maxYRect;

- (void).cxx_destruct;

@end
