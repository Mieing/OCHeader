@class NSString, AWEURLModel;

@interface AWEUserFavouritePOIMapIconModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *selectedIcon;
@property (retain, nonatomic) AWEURLModel *unselectedIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
