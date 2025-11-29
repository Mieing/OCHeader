@class NSString;

@interface ProductDetailItem : NSObject <NSCoding>

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
