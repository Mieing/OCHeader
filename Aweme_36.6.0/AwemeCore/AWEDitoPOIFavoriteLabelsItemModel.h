@class NSString, AWEURLModel;

@interface AWEDitoPOIFavoriteLabelsItemModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *imageURL;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *itemValue;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL hasTrack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
