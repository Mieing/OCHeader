@class NSString, NSDictionary;

@interface IESECActionLogNodeOuterSchema : IESECActionLogNodeBase

@property (copy, nonatomic) NSString *routeName;
@property (copy, nonatomic) NSString *schemaParams;
@property (copy, nonatomic) NSDictionary *schemaDict;

- (id)generateKey;
- (void).cxx_destruct;
- (long long)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)info;

@end
