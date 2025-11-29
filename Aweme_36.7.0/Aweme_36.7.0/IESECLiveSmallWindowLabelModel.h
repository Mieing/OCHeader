@class NSString, NSDictionary, IESECLiveSmallWindowLabelTextModel, NSNumber, IESECLiveImageURLModel;

@interface IESECLiveSmallWindowLabelModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long labelType;
@property (retain, nonatomic) NSNumber *labelID;
@property (retain, nonatomic) IESECLiveImageURLModel *icon;
@property (retain, nonatomic) IESECLiveSmallWindowLabelTextModel *rightText;
@property (retain, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSString *trackEvent;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
