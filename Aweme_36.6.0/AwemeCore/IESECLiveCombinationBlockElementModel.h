@class NSString, NSArray, IESECLiveListBottomJumpInfo, IESECLiveTrackConfigModel, NSNumber, IESECLiveImageURLModel;

@interface IESECLiveCombinationBlockElementModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECLiveImageURLModel *backgroundImage;
@property (retain, nonatomic) NSString *backgroundColor;
@property (retain, nonatomic) NSNumber *cornerRadius;
@property (retain, nonatomic) NSArray *content;
@property (retain, nonatomic) NSNumber *elementHeight;
@property (retain, nonatomic) IESECLiveListBottomJumpInfo *jumpInfo;
@property (retain, nonatomic) IESECLiveTrackConfigModel *showTrackInfo;
@property (retain, nonatomic) IESECLiveTrackConfigModel *clickTrackInfo;
@property (retain, nonatomic) NSString *btmInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
