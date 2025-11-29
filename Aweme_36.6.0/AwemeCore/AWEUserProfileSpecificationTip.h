@class AWEUserProfileSpecificationTaskInfo, NSString, NSDictionary;

@interface AWEUserProfileSpecificationTip : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEUserProfileSpecificationTaskInfo *taskInfo;
@property (copy, nonatomic) NSString *jumpUrl;
@property (copy, nonatomic) NSString *eventKey;
@property (copy, nonatomic) NSString *eventTrackingString;
@property (retain, nonatomic) NSDictionary *eventTracking;
@property (retain, nonatomic) NSDictionary *eventParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)trackWithParams:(id)a0 type:(unsigned long long)a1;
- (void).cxx_destruct;

@end
