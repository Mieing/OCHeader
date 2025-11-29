@class NSString, IESECLiveActionModel, IESECLiveTrackConfigModel, NSNumber, IESECLiveImageURLModel;

@interface IESECLiveGoodsCoverBottomBanner : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long type;
@property (retain, nonatomic) IESECLiveImageURLModel *leftIcon;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) IESECLiveImageURLModel *rightIcon;
@property (retain, nonatomic) NSNumber *priority;
@property (retain, nonatomic) IESECLiveActionModel *action;
@property (retain, nonatomic) IESECLiveTrackConfigModel *track;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
