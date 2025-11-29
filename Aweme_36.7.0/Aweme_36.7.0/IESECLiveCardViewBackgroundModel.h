@class NSString, IESECLiveGoodsRitTagTrackModel;

@interface IESECLiveCardViewBackgroundModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *imageUrl;
@property (retain, nonatomic) IESECLiveGoodsRitTagTrackModel *tagTrack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
