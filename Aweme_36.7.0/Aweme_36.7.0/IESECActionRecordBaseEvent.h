@class NSDictionary, NSString;

@interface IESECActionRecordBaseEvent : NSObject <IESECActionRecordEvent>

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *originalName;
@property (readonly, nonatomic) NSString *moduleString;
@property (readonly, nonatomic) NSString *actionString;
@property (readonly, nonatomic) NSString *moduleActionString;
@property (readonly, nonatomic) NSString *typeString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithType:(unsigned long long)a0 name:(id)a1 params:(id)a2;
- (void).cxx_destruct;

@end
