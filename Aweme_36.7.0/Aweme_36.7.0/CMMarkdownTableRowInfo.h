@class NSArray, NSAttributedString;

@interface CMMarkdownTableRowInfo : NSObject

@property (retain, nonatomic) NSAttributedString *origin;
@property (retain, nonatomic) NSArray *cellContents;
@property (nonatomic) BOOL isHeaderSeparator;
@property (retain, nonatomic) NSArray *alignments;

- (void).cxx_destruct;

@end
