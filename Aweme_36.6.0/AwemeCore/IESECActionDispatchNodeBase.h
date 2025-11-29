@class NSString;

@interface IESECActionDispatchNodeBase : NSObject <IESECActionDispatchNode>

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)toJSONStr;
- (id)init;
- (id)toJSON;

@end
