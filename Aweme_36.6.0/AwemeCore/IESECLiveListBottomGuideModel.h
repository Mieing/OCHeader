@class NSArray, IESECLiveListBottomJumpInfo, NSString, IESECLiveTrackConfigModel, NSNumber, IESECLiveListBottomBgImageInfo;

@interface IESECLiveListBottomGuideModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *leftContent;
@property (retain, nonatomic) NSArray *rightContent;
@property (retain, nonatomic) IESECLiveTrackConfigModel *showTrackInfo;
@property (retain, nonatomic) IESECLiveTrackConfigModel *clickTrackInfo;
@property (nonatomic) long long orientationType;
@property (retain, nonatomic) NSNumber *topMargin;
@property (retain, nonatomic) NSNumber *bottomMargin;
@property (retain, nonatomic) IESECLiveTrackConfigModel *trackInfo;
@property (retain, nonatomic) IESECLiveListBottomBgImageInfo *bgImageInfo;
@property (retain, nonatomic) IESECLiveListBottomJumpInfo *normalJumpInfo;
@property (nonatomic) BOOL displayInCategoryTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)leftContentJSONTransformer;
+ (id)rightContentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)existBottomGuideViewClickAction;
- (void).cxx_destruct;

@end
