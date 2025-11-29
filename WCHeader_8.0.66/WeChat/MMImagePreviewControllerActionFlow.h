@class MMAsset, EditVideoAttr, NSDictionary;
@protocol MMAssetCompositeTaskProtocol;

@interface MMImagePreviewControllerActionFlow : NSObject

@property (nonatomic) BOOL isPickerFinished;
@property (nonatomic) BOOL shouldSaveAlbum;
@property (retain, nonatomic) id<MMAssetCompositeTaskProtocol> videoCompositeTask;
@property (retain, nonatomic) MMAsset *srcVideoAsset;
@property (retain, nonatomic) EditVideoAttr *editVideoAttr;
@property (retain, nonatomic) NSDictionary *byPassInfo;

- (void).cxx_destruct;

@end
