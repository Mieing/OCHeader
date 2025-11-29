@class NSString, NSArray;

@interface WCFinderMentionTextMatcher : NSObject

@property (retain, nonatomic) NSString *text;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (nonatomic) BOOL firstMatch;
@property (retain, nonatomic) NSArray *results;
@property (nonatomic) long long idx;

- (id)initWithText:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 firstMatch:(BOOL)a2;
- (void)doTest;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })nextMatch;
- (BOOL)textTextIsEmailTail:(id)a0;
- (void).cxx_destruct;

@end
