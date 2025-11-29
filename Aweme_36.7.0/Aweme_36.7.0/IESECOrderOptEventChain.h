@class NSString, NSDictionary;

@interface IESECOrderOptEventChain : NSObject <NSCopying>

@property (copy, nonatomic) NSString *nodeKey;
@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSString *triggerMode;
@property (copy, nonatomic) NSDictionary *fields;
@property (copy, nonatomic) NSString *triggerControlFlow;
@property (copy, nonatomic) NSString *scene;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
