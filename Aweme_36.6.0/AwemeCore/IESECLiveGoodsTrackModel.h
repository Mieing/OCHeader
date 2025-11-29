@class NSString, IESECLiveTrackConfigModel;

@interface IESECLiveGoodsTrackModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long trackEventType;
@property (retain, nonatomic) IESECLiveTrackConfigModel *showTrackModel;
@property (retain, nonatomic) IESECLiveTrackConfigModel *clickTrackModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
