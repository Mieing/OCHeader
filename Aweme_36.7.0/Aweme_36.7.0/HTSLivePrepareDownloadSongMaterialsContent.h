@class NSMutableArray;

@interface HTSLivePrepareDownloadSongMaterialsContent : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *musicListArray;
@property (readonly, nonatomic) unsigned long long musicListArray_Count;

+ (id)descriptor;

@end
