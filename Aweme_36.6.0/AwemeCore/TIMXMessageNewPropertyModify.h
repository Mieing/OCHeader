@class NSString;

@interface TIMXMessageNewPropertyModify : NSObject

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *idempotentID;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;

@end
