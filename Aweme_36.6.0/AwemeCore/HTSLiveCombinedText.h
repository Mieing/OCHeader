@class HTSLiveComboInfo, NSMutableArray, HTSLiveSchemaInfo;

@interface HTSLiveCombinedText : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *displayItemsArray;
@property (readonly, nonatomic) unsigned long long displayItemsArray_Count;
@property (retain, nonatomic) HTSLiveSchemaInfo *schemaInfo;
@property (nonatomic) BOOL hasSchemaInfo;
@property (retain, nonatomic) HTSLiveComboInfo *comboInfo;
@property (nonatomic) BOOL hasComboInfo;

+ (id)descriptor;

- (void)ieslive_loadAllImageForImageItemWithDownloader:(id)a0 andDownloadTextItemImagePieces:(BOOL)a1 completion:(id /* block */)a2;
- (void)ieslive_loadAllImageForImageItemWithDownloader:(id)a0 andDownloadTextItemImagePieces:(BOOL)a1;

@end
