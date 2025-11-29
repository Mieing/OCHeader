@class NSString;

@interface WCFinderModifyDiffModel : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } aRange;
@property (copy, nonatomic) NSString *aString;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } bRange;
@property (copy, nonatomic) NSString *bString;

- (id)description;
- (void).cxx_destruct;

@end
