@class NSString, NSNumber;

@interface AWEGoodsSKUStock : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long stockLeft;
@property (retain, nonatomic) NSNumber *price;
@property (nonatomic) long long userLimit;
@property (nonatomic) BOOL isActivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
