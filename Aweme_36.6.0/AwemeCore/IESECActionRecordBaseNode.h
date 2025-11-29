@class NSString;

@interface IESECActionRecordBaseNode : NSObject <IESECActionRecordNode>

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long action;
@property (copy, nonatomic) NSString *actionUUID;
@property (copy, nonatomic) NSString *actionBizID;
@property (nonatomic) double timestamp;
@property (readonly, copy, nonatomic) NSString *moduleString;
@property (readonly, copy, nonatomic) NSString *actionString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 action:(unsigned long long)a1;

@end
