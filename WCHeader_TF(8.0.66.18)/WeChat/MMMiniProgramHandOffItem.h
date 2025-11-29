@class NSString;

@interface MMMiniProgramHandOffItem : MMHandOffItem <NSCopying>

@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *appid;
@property (copy, nonatomic) NSString *appentrypage;
@property (copy, nonatomic) NSString *appusername;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initFromMinimizeTaskData:(id)a0;
- (void).cxx_destruct;

@end
