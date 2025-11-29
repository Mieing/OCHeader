@class NSString, IESECURLModel;

@interface IESECGoodsIPActivityModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double initTimeinterval;
@property (nonatomic) double serverTime;
@property (copy, nonatomic) NSString *slogan;
@property (retain, nonatomic) IESECURLModel *logoURL;
@property (retain, nonatomic) NSString *backgroundURL;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (readonly, nonatomic) double currentTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
