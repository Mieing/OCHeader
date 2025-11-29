@class NSString;

@interface ActionDetail : NSObject <NSCoding>

@property (retain, nonatomic) NSString *name;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)toXml;
- (void).cxx_destruct;

@end
