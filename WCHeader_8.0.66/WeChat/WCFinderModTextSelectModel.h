@class NSString;

@interface WCFinderModTextSelectModel : NSObject

@property (nonatomic) unsigned long long sourceType;
@property (nonatomic) unsigned long long contentType;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectRange;
@property (copy, nonatomic) NSString *selectText;

- (id)initWithSourceType:(unsigned long long)a0 selectRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 selectText:(id)a2;
- (void).cxx_destruct;

@end
