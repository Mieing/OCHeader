@class NSString, UIColor, NSNumber;

@interface IESIMMarkdownParseContext : NSObject

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) BOOL needTrack;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) NSNumber *diffFontSize;

- (void).cxx_destruct;

@end
