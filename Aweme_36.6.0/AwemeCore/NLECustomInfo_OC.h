@class NSString;

@interface NLECustomInfo_OC : NLENode_OC

@property (nonatomic) struct shared_ptr<cut::model::NLECustomInfo> { struct NLECustomInfo *x0; struct __shared_weak_count *x1; } cppValue;
@property (nonatomic) long long infoIndex;
@property (copy, nonatomic) NSString *infoTag;
@property (copy, nonatomic) NSString *relatedUuid;
@property (copy, nonatomic) NSString *widgetName;

@end
