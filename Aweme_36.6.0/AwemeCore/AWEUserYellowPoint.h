@class NSNumber, NSString;

@interface AWEUserYellowPoint : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long pointType;
@property (retain, nonatomic) NSNumber *timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
