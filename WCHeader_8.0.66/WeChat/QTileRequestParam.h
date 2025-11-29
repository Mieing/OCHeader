@class NSString;

@interface QTileRequestParam : NSObject <NSCopying>

@property int z;
@property int x;
@property int y;
@property int dataType;
@property int tag;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *engineOriginalUrl;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isTileOverlay;
- (id)description;
- (void).cxx_destruct;

@end
