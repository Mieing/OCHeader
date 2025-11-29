@class NSString;

@interface MATileOverlaySource : NSObject

@property (nonatomic) long long sourceId;
@property (nonatomic) unsigned long long sourceType;
@property (retain, nonatomic) NSString *sourceUrlTemplate;
@property (nonatomic) long long minZoom;
@property (nonatomic) long long maxZoom;
@property (nonatomic) unsigned long long dataCacheType;

- (void).cxx_destruct;
- (id)init;

@end
