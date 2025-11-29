@class NSDictionary, NSString;

@interface IESECActionLogNodeBase : NSObject <NSCopying, NSCoding, IESECActionLogNode>

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSDictionary *info;
@property (retain, nonatomic) NSString *sessionId;
@property (readonly, nonatomic) long long timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)toJSONStr;
- (id)initWithTimestamp:(long long)a0 sessionId:(id)a1;
- (id)generateKey;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)toJSON;

@end
