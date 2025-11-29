@class NSString;

@interface AWETeenDescriptionProcessMark : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (retain, nonatomic) NSString *value;

+ (id)initWithType:(unsigned long long)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withValue:(id)a2;

- (void).cxx_destruct;

@end
