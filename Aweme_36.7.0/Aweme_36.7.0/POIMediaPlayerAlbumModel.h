@class NSArray, NSString;

@interface POIMediaPlayerAlbumModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *photos;
@property (copy, nonatomic) NSString *musicURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
