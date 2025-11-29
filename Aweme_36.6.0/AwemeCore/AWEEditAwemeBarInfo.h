@class NSString, NSNumber;

@interface AWEEditAwemeBarInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long buttonStatus;
@property (copy, nonatomic) NSString *buttonToast;
@property (copy, nonatomic) NSString *barToast;
@property (nonatomic) unsigned long long editStatus;
@property (nonatomic) BOOL hasModifiedAll;
@property (copy, nonatomic) NSNumber *updateTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
