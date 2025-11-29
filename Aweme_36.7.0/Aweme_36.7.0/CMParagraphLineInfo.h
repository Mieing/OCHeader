@class NSString, NSAttributedString;

@interface CMParagraphLineInfo : NSObject

@property (retain, nonatomic) NSAttributedString *line;
@property (copy, nonatomic) NSString *separator;

- (id)curLineAttributedStr;
- (id)curLineAttributedStrWithoutLineSeparator;
- (void).cxx_destruct;

@end
