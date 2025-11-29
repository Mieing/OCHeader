@class NSString;

@interface BDXBracketMark : NSObject

@property (retain, nonatomic) NSString *mark;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (void).cxx_destruct;

@end
