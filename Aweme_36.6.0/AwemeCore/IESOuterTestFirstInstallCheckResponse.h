@class NSNumber, NSString;

@interface IESOuterTestFirstInstallCheckResponse : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *totalCount;
@property (nonatomic) BOOL isInTest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
