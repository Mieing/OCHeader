@class IESECVideoGirdleCountdownModel, IESECURLModel, IESECVideoGirdleSloganModel, NSString;

@interface IESECVideoGirdleInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long type;
@property (retain, nonatomic) IESECURLModel *backgroundImage;
@property (retain, nonatomic) IESECURLModel *logoImage;
@property (retain, nonatomic) IESECVideoGirdleSloganModel *slogan;
@property (retain, nonatomic) IESECVideoGirdleCountdownModel *countdownInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)typeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
