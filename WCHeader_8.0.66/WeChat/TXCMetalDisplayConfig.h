@interface TXCMetalDisplayConfig : NSObject

@property (class, readonly, nonatomic) int hdrStaticMetadataLuminaceScale;

@property unsigned long long colorSpace;
@property int maxDisplayLum;
@property int minDisplayLum;
@property (nonatomic) int maxDisplayMasteringLum;
@property (nonatomic) int minDisplayMasteringLum;
@property (nonatomic) unsigned long long pixelFormat;

+ (BOOL)isBT2020Supported;
+ (id)createWithHdrMetadata:(const void *)a0 pixelFormat:(int)a1;

- (id)init;
- (BOOL)isEqual:(id)a0;

@end
