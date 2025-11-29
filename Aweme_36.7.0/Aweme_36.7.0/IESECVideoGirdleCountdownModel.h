@class NSString;

@interface IESECVideoGirdleCountdownModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double serverTime;
@property (copy, nonatomic) NSString *prefix;
@property (nonatomic) double currentTime;
@property (nonatomic) double endTime;
@property (nonatomic) double initTimeinterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
