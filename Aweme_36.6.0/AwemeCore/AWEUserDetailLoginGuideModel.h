@class NSNumber, NSString;

@interface AWEUserDetailLoginGuideModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *maxCount;
@property (retain, nonatomic) NSNumber *dailyMaxCount;
@property (retain, nonatomic) NSNumber *exitDays;
@property (retain, nonatomic) NSNumber *continuousShowCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
