@class NSString, NSAttributedString;

@interface WCFinderNavTabTitle : NSObject

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSAttributedString *richText;

+ (id)titleWithText:(id)a0;
+ (id)titleWithView:(id)a0;
+ (id)titleWithIcon:(id)a0 text:(id)a1;
+ (id)defaultFont;

- (void).cxx_destruct;

@end
