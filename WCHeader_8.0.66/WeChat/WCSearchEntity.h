@class NSString;

@interface WCSearchEntity : MMObject

@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) unsigned long long scene;

- (id)init;
- (void).cxx_destruct;

@end
