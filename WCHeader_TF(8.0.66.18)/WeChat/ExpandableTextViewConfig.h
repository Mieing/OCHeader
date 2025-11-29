@class NSString, UIFont, UIColor;

@interface ExpandableTextViewConfig : NSObject

@property (retain, nonatomic) NSString *shrinkWording;
@property (retain, nonatomic) NSString *expandWording;
@property (nonatomic) long long shrinkLineNum;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) BOOL expandHotArea;
@property (nonatomic) BOOL lineBreakByClipping;

- (id)init;
- (void).cxx_destruct;

@end
