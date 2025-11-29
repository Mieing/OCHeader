@class NSString;

@interface LiteAppTasksContextData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *page;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSString *extraData;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
