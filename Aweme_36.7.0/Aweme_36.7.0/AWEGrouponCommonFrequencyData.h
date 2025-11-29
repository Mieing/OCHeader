@class NSArray, NSString;

@interface AWEGrouponCommonFrequencyData : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSString *objectType;
@property (copy, nonatomic) NSString *objectIndex;
@property (copy, nonatomic) NSString *objectSvrData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
