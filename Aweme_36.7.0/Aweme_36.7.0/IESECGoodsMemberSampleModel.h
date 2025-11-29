@class NSString;

@interface IESECGoodsMemberSampleModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double initTimeinterval;
@property (nonatomic) double serverTime;
@property (nonatomic) double preBeginTime;
@property (nonatomic) double beginTime;
@property (nonatomic) double endTime;
@property (copy, nonatomic) NSString *reason;
@property (nonatomic) long long type;
@property (readonly, nonatomic) double currentTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)getTrackParams;
- (void).cxx_destruct;
- (id)init;

@end
