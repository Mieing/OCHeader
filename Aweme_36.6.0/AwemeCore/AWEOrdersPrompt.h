@class NSString;

@interface AWEOrdersPrompt : NSObject <NSCoding>

@property (nonatomic) long long orderState;
@property (copy, nonatomic) NSString *toastContent;
@property (nonatomic) long long updateTime;
@property (nonatomic) long long tabID;
@property (retain, nonatomic) NSString *orderListSchema;
@property (retain, nonatomic) NSString *UID;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
