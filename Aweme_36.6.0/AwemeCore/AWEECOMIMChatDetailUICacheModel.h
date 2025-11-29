@class NSString;

@interface AWEECOMIMChatDetailUICacheModel : NSObject <NSCoding>

@property (copy, nonatomic) NSString *shopName;
@property (copy, nonatomic) NSString *shopIcon;
@property (copy, nonatomic) NSString *encodedShopId;
@property (copy, nonatomic) NSString *pigeonBizType;
@property (copy, nonatomic) NSString *aggregatesType;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
