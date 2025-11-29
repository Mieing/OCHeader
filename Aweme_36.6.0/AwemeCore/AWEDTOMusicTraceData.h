@class NSString;

@interface AWEDTOMusicTraceData : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *musicShowRank;
@property (nonatomic) long long musicRecType;
@property (nonatomic) long long musicRecTypeForAutoLoad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
