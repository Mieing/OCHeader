@class NSMutableSet;

@interface IESOverriddenMethodPackage : NSObject <NSCoding>

@property (readonly, nonatomic) NSMutableSet *publicMethods;
@property (readonly, nonatomic) NSMutableSet *protectedMethods;
@property (readonly, nonatomic) NSMutableSet *privateMethods;

- (BOOL)containsMethodName:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
