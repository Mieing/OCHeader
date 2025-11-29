@class NSString;

@interface ActionRefer : NSObject <NSCoding>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *referKey;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)toXml;
- (void).cxx_destruct;

@end
