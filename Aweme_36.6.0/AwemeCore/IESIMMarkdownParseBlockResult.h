@class NSArray, NSAttributedString;

@interface IESIMMarkdownParseBlockResult : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) long long index;
@property (copy, nonatomic) NSAttributedString *flatAttrStr;
@property (copy, nonatomic) NSArray *dataSource;
@property (nonatomic) BOOL hasTitleRow;

- (void).cxx_destruct;

@end
