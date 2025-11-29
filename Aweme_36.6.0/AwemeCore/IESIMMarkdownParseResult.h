@class NSArray, NSAttributedString;

@interface IESIMMarkdownParseResult : NSObject

@property (copy, nonatomic) NSAttributedString *flatAttrStr;
@property (copy, nonatomic) NSArray *contentBlocks;

- (void).cxx_destruct;

@end
