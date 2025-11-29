@class IESECLiveGoodsRitTagTrackModel, NSString, NSDictionary, IESECLiveCardViewBackgroundModel, NSNumber, IESECLiveImageURLModel;

@interface IESECLiveCardViewIconModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECLiveImageURLModel *topIcon;
@property (copy, nonatomic) NSString *tagIconURLString;
@property (copy, nonatomic) NSString *tagPresaleText;
@property (retain, nonatomic) NSDictionary *buyButtonURLMap;
@property (nonatomic) BOOL buyImageIsWide;
@property (retain, nonatomic) NSNumber *productType;
@property (nonatomic) unsigned long long liveProtectType;
@property (retain, nonatomic) IESECLiveGoodsRitTagTrackModel *tagTrack;
@property (retain, nonatomic) IESECLiveCardViewBackgroundModel *backgroundViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagTrackJSONTransformer;
+ (id)backgroundViewModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
