@class NSString;

@interface TPYYClassIvarInfo : NSObject

@property (readonly, nonatomic) struct objc_ivar { } *ivar;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long offset;
@property (readonly, nonatomic) NSString *typeEncoding;
@property (readonly, nonatomic) unsigned long long type;

- (id)initWithIvar:(struct objc_ivar { } *)a0;
- (void).cxx_destruct;

@end
