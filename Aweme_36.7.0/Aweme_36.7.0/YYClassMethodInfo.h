@class NSString, NSArray;

@interface YYClassMethodInfo : NSObject

@property (readonly, nonatomic) struct objc_method { } *method;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) SEL sel;
@property (readonly, nonatomic) void /* function */ *imp;
@property (readonly, nonatomic) NSString *typeEncoding;
@property (readonly, nonatomic) NSString *returnTypeEncoding;
@property (readonly, nonatomic) NSArray *argumentTypeEncodings;

- (void).cxx_destruct;
- (id)initWithMethod:(struct objc_method { } *)a0;

@end
