@class NSString;

@interface SafeDevice : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *deviceType;
@property (nonatomic) unsigned int createTime;

+ (void)initialize;

- (void)setCreateTime:(unsigned int)a0;
- (unsigned int)createTime;
- (void)setDeviceType:(id)a0;
- (id)deviceType;
- (void)setUuid:(id)a0;
- (id)uuid;
- (void)setName:(id)a0;
- (id)name;

@end
