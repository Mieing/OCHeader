@class NSString, AWEAssetModel;

@interface ACCVideoImportConfig : NSObject

@property (retain, nonatomic) NSString *taskID;
@property (nonatomic) BOOL convertAVAssetEnable;
@property (nonatomic) BOOL needSuperLock;
@property (nonatomic) BOOL needCoverImage;
@property (retain, nonatomic) AWEAssetModel *inputAssetModel;

+ (struct CGSize { double x0; double x1; })resolution;

- (id)initWithTaskID:(id)a0 assetModel:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
