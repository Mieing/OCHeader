@class NSArray, BDPUniqueID;

@interface BDPPreviewImagePluginModel : BDPBasePluginModel

@property (retain, nonatomic) NSArray *images;
@property (nonatomic) long long startIndex;
@property (nonatomic) BOOL isShowMenuEnable;
@property (retain, nonatomic) BDPUniqueID *uniqueID;

- (void).cxx_destruct;

@end
