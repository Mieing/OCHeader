@class NSArray;
@protocol RTVQosNodeDescription;

@interface RTVQosMonitorDescription : JSONModel

@property (copy, nonatomic) NSArray<RTVQosNodeDescription> *nodeDescriptions;

+ (id)keyMapper;

- (void).cxx_destruct;

@end
