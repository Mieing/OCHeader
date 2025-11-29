@class NSString;

@interface MJImagePickerAssetInfo : NSObject

@property (readonly, nonatomic) NSString *assetID;
@property (readonly, nonatomic) int index;
@property (readonly, nonatomic) BOOL isAppleProResCodec;
@property (readonly, nonatomic) BOOL isP3DisplayColorSpace;

- (id)initWithAssetID:(id)a0 index:(int)a1 isAppleProResCodec:(BOOL)a2 isP3DisplayColorSpace:(BOOL)a3;
- (void).cxx_destruct;

@end
