@class NSString;

@interface AWEAntiAddictPopupModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long strategy;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (nonatomic) long long showFreq;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
