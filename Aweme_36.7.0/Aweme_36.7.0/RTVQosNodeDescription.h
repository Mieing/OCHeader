@class NSString, NSArray, NSDictionary;
@protocol Optional;

@interface RTVQosNodeDescription : JSONModel

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long positionID;
@property (copy, nonatomic) NSArray<Optional> *dependencies;
@property (copy, nonatomic) NSString<Optional> *referedNodeID;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString<Optional> *eventKey;
@property (copy, nonatomic) NSDictionary<Optional> *extraMonitorInfo;

+ (id)keyMapper;

- (void).cxx_destruct;

@end
