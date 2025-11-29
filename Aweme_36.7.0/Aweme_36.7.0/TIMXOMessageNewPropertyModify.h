@class NSString;

@interface TIMXOMessageNewPropertyModify : NSObject <IESIMMessageNewPropertyModifyProtocol>

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *idempotentID;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *idempotentID;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;

@end
