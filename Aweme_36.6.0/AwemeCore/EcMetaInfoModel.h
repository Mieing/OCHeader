@class EcMetaItem, EcResourceItem, EcExifItem;

@interface EcMetaInfoModel : NSObject

@property (retain, nonatomic) EcMetaItem *meta;
@property (retain, nonatomic) EcResourceItem *resource;
@property (retain, nonatomic) EcExifItem *exif;

+ (id)modelContainerPropertyGenericClass;

- (void).cxx_destruct;

@end
