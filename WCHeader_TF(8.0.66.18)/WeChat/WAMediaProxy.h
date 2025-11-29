@class NSString;

@interface WAMediaProxy : NSObject <IWAMediaService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)getVideoDuration:(id)a0;
+ (id)formatHaoWanUrl:(id)a0 videoPath:(id)a1 fileSize:(unsigned int)a2 thumbImage:(id)a3;
+ (void)showEditPanel:(id)a0 parmas:(id)a1 filePath:(id)a2 thumbImage:(id)a3 controller:(id)a4 callback:(id /* block */)a5;
+ (id)addTmpResource:(id)a0 filePath:(id)a1 thumbImage:(id)a2;
+ (void)jumpToGameRecordShare:(id)a0 withWidth:(unsigned int)a1 withHeight:(unsigned int)a2 withAppName:(id)a3 withAppId:(id)a4 withExtConfigJson:(id)a5 withShareOptions:(id)a6 withShareTitle:(id)a7 withShareDesc:(id)a8 withAppVersion:(unsigned int)a9 withAppState:(unsigned int)a10 withIsDevEdited:(BOOL)a11 withController:(id)a12 callbck:(id /* block */)a13;
+ (BOOL)generateTempLocalID:(id *)a0 path:(id *)a1 appID:(id)a2 fileType:(id)a3;


@end
