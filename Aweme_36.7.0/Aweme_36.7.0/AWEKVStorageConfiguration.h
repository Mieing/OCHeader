@class NSString;

@interface AWEKVStorageConfiguration : NSObject

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *deviceId;

+ (BOOL)validString:(id)a0;
+ (BOOL)validNumber:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
