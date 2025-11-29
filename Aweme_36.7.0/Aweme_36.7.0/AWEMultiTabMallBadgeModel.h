@class NSString, NSDictionary;

@interface AWEMultiTabMallBadgeModel : MTLModel <MTLJSONSerializing, AWEMallTimerTaskModelProtocol>

@property (copy, nonatomic) NSString *text;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) double stayDuration;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
