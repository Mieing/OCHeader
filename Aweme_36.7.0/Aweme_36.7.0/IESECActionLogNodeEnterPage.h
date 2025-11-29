@class NSDictionary, NSString;

@interface IESECActionLogNodeEnterPage : IESECActionLogNodeBase

@property (copy, nonatomic) NSDictionary *queryInfo;
@property (copy, nonatomic) NSString *schemaParams;

- (id)generateKey;
- (void).cxx_destruct;
- (long long)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)info;

@end
