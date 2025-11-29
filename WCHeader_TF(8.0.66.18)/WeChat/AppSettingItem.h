@class NSString;

@interface AppSettingItem : NSObject <NSCoding>

@property (retain, nonatomic) NSString *appID;
@property (retain, nonatomic) NSString *openID;
@property (nonatomic) unsigned int flag;
@property (nonatomic) BOOL appAddedByUser;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
