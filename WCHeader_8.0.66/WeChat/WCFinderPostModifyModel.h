@class NSString;

@interface WCFinderPostModifyModel : NSObject

@property (nonatomic) unsigned long long sourceType;
@property (nonatomic) unsigned long long contentType;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } fromTextRange;
@property (copy, nonatomic) NSString *fromText;
@property (copy, nonatomic) NSString *toText;

- (id)initBySelectModel:(id)a0 toText:(id)a1;
- (id)initWithFromTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 fromText:(id)a1 toText:(id)a2;
- (BOOL)isValidModel;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (long long)getModifyCount;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })getToTextRange;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })getMatchRange;
- (void).cxx_destruct;

@end
