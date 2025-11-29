@class NSString;

@interface AWEECOMShopIconModel : NSObject <NSCoding>

@property (copy, nonatomic) NSString *url;
@property (nonatomic) double width;
@property (nonatomic) double height;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
