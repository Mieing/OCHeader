@class NSString;

@interface WCPayPayManageLabel : NSObject <NSCoding>

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *logoUrl;
@property (nonatomic) unsigned int jumpType;
@property (retain, nonatomic) NSString *jumpUrl;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *path;

+ (id)genFromDict:(id)a0;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
