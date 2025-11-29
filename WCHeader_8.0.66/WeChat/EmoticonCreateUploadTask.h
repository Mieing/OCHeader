@class NSArray, EmoticonCustomManageAddLogic;
@protocol EmoticonCreateUploadTaskDelegate;

@interface EmoticonCreateUploadTask : EmoticonCustomCreateInternalTask

@property (retain, nonatomic) EmoticonCustomManageAddLogic *addEmoticonLogic;
@property (weak, nonatomic) id<EmoticonCreateUploadTaskDelegate> delegate;
@property (copy, nonatomic) id /* block */ appendInfoBlock;
@property (copy, nonatomic) id /* block */ uploadFailBlock;
@property (nonatomic) unsigned long long totalEditCount;
@property (retain, nonatomic) NSArray *editAssetInfosForReport;

- (void)startUpload;
- (void)handleAddingItem:(id)a0;
- (id)realDoAddImg:(id)a0 index:(unsigned long long)a1;
- (int)getUploadSceneFrom:(unsigned long long)a0;
- (int)getAddEmoticonSourceFrom:(unsigned long long)a0;
- (void).cxx_destruct;

@end
