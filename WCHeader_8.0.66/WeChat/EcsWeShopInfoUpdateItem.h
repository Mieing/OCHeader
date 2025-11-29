@class NSString;

@interface EcsWeShopInfoUpdateItem : NSObject

@property (readonly, copy, nonatomic) NSString *shopAppId;
@property (readonly, nonatomic) double updateTime;
@property (readonly, nonatomic) unsigned long long status;

- (id)initWithShopAppId:(id)a0;
- (void)updateStatus:(unsigned long long)a0;
- (BOOL)isUnknown;
- (BOOL)isRunning;
- (BOOL)isFailed;
- (BOOL)isSuccess;
- (void).cxx_destruct;

@end
