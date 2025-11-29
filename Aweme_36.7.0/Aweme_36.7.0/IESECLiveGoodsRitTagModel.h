@class IESECLiveGoodsRitTagTrackModel, NSString, NSArray, IESECLiveGoodsRitTagUIConfigModel, IESECLiveIconGroupModel, NSDictionary;

@interface IESECLiveGoodsRitTagModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *tagID;
@property (retain, nonatomic) IESECLiveIconGroupModel *iconGroup;
@property (copy, nonatomic) NSArray *textContents;
@property (retain, nonatomic) NSString *labelName;
@property (retain, nonatomic) NSString *trackName;
@property (retain, nonatomic) NSString *urlString;
@property (retain, nonatomic) IESECLiveGoodsRitTagUIConfigModel *uiConfig;
@property (copy, nonatomic) NSArray *animationText;
@property (nonatomic) long long textType;
@property (retain, nonatomic) NSDictionary *eventParams;
@property (retain, nonatomic) IESECLiveGoodsRitTagTrackModel *tagTrack;
@property (nonatomic) BOOL needAnimated;
@property (retain, nonatomic) NSArray *subRitTags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)uiConfigJSONTransformer;
+ (id)tagTrackJSONTransformer;
+ (id)subRitTagsJSONTransformer;
+ (id)iconGroupJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
