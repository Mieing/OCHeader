@class NSString;

@interface AWEImageAlbumMusicInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long beginTime;
@property (nonatomic) long long endTime;
@property (nonatomic) long long volume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
