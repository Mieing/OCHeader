@class NSString, LVCanvasAsset;

@interface LVDraftCanvasPayloadPackage : NSObject

@property (retain, nonatomic) LVCanvasAsset *asset;
@property (retain, nonatomic) LVCanvasAsset *albumAsset;
@property (copy, nonatomic) NSString *smallImageFileKey;
@property (copy, nonatomic) NSString *canvasStyle;
@property (copy, nonatomic) NSString *canvasStyleId;

- (void).cxx_destruct;

@end
