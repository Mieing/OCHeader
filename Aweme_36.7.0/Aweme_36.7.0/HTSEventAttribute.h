@class NSString;

@interface HTSEventAttribute : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy) id value;

+ (id)attributeNamed:(id)a0;

- (id /* block */)equalTo;
- (void).cxx_destruct;
- (id)which;

@end
