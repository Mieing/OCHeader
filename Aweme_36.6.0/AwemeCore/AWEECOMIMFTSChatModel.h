@class NSString;

@interface AWEECOMIMFTSChatModel : NSObject <NSCoding>

@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long timestamp;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
