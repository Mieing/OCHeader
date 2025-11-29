@class NSString;

@interface AWEFindFriendsLoginGuideConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long alertDelayTime;
@property (nonatomic) unsigned long long alertMaxTimes;
@property (nonatomic) unsigned long long alertInteval;
@property (nonatomic) unsigned long long alertExitTimes;
@property (nonatomic) unsigned long long alertExitDuration;
@property (copy, nonatomic) NSString *alertTitle;
@property (copy, nonatomic) NSString *alertDescription;
@property (copy, nonatomic) NSString *alertConfirm;
@property (copy, nonatomic) NSString *alertCancel;
@property (copy, nonatomic) NSString *loginGuideTitle;
@property (copy, nonatomic) NSString *contactGuideTitle;
@property (copy, nonatomic) NSString *contactGuideDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
