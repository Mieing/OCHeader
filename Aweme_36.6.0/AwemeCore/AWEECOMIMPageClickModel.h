@class NSString, UIResponder;

@interface AWEECOMIMPageClickModel : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *btmId;
@property (weak, nonatomic) UIResponder *btmHost;
@property (nonatomic) BOOL shouldAddSourceBtmToken;
@property (copy, nonatomic) NSString *content;

+ (id)openUrlModelWithSchema:(id)a0 btmIDForSourceBtmToken:(id)a1 btmHost:(id)a2;
+ (id)showToastModelWithContent:(id)a0;
+ (id)openUrlModelWithSchema:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
