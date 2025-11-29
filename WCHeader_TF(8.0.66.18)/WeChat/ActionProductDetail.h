@class NSString;

@interface ActionProductDetail : NSObject <NSCoding>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *iconurl;
@property (retain, nonatomic) NSString *productid;
@property (retain, nonatomic) NSString *digest;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)toXml;
- (void).cxx_destruct;

@end
