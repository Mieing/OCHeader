@class NSSet, NSAttributedString, LynxTextStyle;

@interface LynxAttributedTextBundle : NSObject

@property (retain, nonatomic) NSAttributedString *attributedString;
@property (retain, nonatomic) LynxTextStyle *textStyle;
@property (retain, nonatomic) NSSet *inlineElementSigns;
@property (nonatomic) unsigned long long textOverflow;
@property (nonatomic) long long overflow;
@property (nonatomic) unsigned long long whiteSpace;
@property (nonatomic) long long maxLineNum;

- (void).cxx_destruct;

@end
