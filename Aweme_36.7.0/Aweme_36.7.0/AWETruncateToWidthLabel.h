@class NSString, NSMutableArray;

@interface AWETruncateToWidthLabel : UILabel

@property (nonatomic) double maxWidth;
@property (nonatomic) double maxLineHeight;
@property (nonatomic) long long maxLineNumber;
@property (nonatomic) long long wordNumberOfFirstString;
@property (nonatomic) long long lineNumber;
@property (retain, nonatomic) NSMutableArray *originText;
@property (retain, nonatomic) NSString *firstString;
@property (retain, nonatomic) NSString *keepString;

- (id)array2String:(id)a0;
- (long long)numberOfLine:(id)a0;
- (void)setupLabel:(id)a0;
- (void).cxx_destruct;

@end
