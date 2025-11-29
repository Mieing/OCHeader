@class NSAttributedString;

@interface BDXLynxInputBracketMark : NSObject

@property (retain, nonatomic) NSAttributedString *mark;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (void).cxx_destruct;

@end
