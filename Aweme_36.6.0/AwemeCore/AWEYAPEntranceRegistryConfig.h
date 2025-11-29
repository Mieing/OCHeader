@class NSString;

@interface AWEYAPEntranceRegistryConfig : NSObject

@property (copy, nonatomic) NSString *entranceType;
@property (copy, nonatomic) NSString *bizKey;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) Class handlerCls;

- (void).cxx_destruct;

@end
