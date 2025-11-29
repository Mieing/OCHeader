@class NSDictionary;

@interface RTVRoomSyncDataWrapper : JSONModel

@property (nonatomic) long long syncType;
@property (copy, nonatomic) NSDictionary *syncData;

+ (id)keyMapper;

- (id)initWithSyncType:(long long)a0 syncData:(id)a1;
- (void)setSyncDataWithNSString:(id)a0;
- (id)JSONObjectForSyncData;
- (void).cxx_destruct;

@end
