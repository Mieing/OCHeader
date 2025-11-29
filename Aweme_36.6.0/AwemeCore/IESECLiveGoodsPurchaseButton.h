@class NSString, IESECLiveTrackConfigModel, IESECLiveActionModel;

@interface IESECLiveGoodsPurchaseButton : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long buttonStyle;
@property (nonatomic) long long maskStyle;
@property (retain, nonatomic) IESECLiveActionModel *action;
@property (retain, nonatomic) IESECLiveTrackConfigModel *showTrackModel;
@property (retain, nonatomic) IESECLiveTrackConfigModel *clickTrackModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
