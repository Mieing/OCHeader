@class NSString;

@interface AWEEventAttribute : NSObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) id value;

+ (id)attributeNamed:(id)a0 value:(id)a1;

- (id /* block */)equalTo;
- (void).cxx_destruct;
- (void)equalTo:(id /* block */)a0;
- (id)debugDescription;

@end
