@class NSNumber, NSString;

@interface AWEIMSpringFaceToFaceInnerPushModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSNumber *startTime;
@property (copy, nonatomic) NSNumber *endTime;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *schema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
