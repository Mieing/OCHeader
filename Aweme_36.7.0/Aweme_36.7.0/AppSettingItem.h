@class NSString;

@interface AppSettingItem : NSObject <NSCoding>

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *openID;
@property (nonatomic) unsigned int flag;
@property (nonatomic) BOOL appAddedByUser;

- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
