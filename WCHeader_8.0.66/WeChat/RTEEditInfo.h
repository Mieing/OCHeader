@class NSString;

@interface RTEEditInfo : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } editeRange;
@property (retain, nonatomic) NSString *editString;

- (void).cxx_destruct;

@end
