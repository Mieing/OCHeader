@class NSString;

@interface ActionGridItem : NSObject <NSCoding>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *productID;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)toXml;
- (void).cxx_destruct;

@end
