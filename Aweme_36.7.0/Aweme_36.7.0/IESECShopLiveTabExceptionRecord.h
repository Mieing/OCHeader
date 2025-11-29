@class NSString;

@interface IESECShopLiveTabExceptionRecord : NSObject <NSCoding>

@property (copy, nonatomic) NSString *roomID;
@property (nonatomic) double time;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
