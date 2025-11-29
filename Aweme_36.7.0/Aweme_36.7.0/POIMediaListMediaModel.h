@class POIMediaPlayerModel, NSDictionary, POIMediaListMediaLynxUpdateModel, NSString, POIMediaListContainerModel;

@interface POIMediaListMediaModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long index;
@property (retain, nonatomic) POIMediaPlayerModel *playerModel;
@property (retain, nonatomic) NSDictionary *trackData;
@property (retain, nonatomic) POIMediaListContainerModel *interactorContainer;
@property (retain, nonatomic) POIMediaListContainerModel *bodyContainer;
@property (retain, nonatomic) POIMediaListMediaLynxUpdateModel *lynxUpdateModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
