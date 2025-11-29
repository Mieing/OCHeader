@class NSString, MMListenLocalFileInfo, MMMusicInfo, MMMultipleMusicViewController, FileDetailLogicController;

@interface MMMusicLocalFileDataInfo : MMObject

@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *fileName;
@property (retain, nonatomic) MMListenLocalFileInfo *tingFileInfo;
@property (retain, nonatomic) MMMusicInfo *musicInfo;
@property (nonatomic) unsigned long long source;
@property (weak, nonatomic) MMMultipleMusicViewController *vcDelegate;
@property (retain, nonatomic) FileDetailLogicController *baseLogicController;

+ (BOOL)canUseMusicPlayerWithFavData:(id)a0;

- (id)initFromMsgWrap:(id)a0;
- (id)initFromFavItem:(id)a0 andFavData:(id)a1;
- (id)initFromGroupNoticeItem:(id)a0 favData:(id)a1;
- (id)initFromRecordDataWrap:(id)a0;
- (id)initFromEmailAttach:(id)a0 AndEmailID:(id)a1;
- (id)initFromFilePath:(id)a0 fileName:(id)a1 fileSize:(unsigned int)a2;
- (void)initMusicInfo;
- (void).cxx_destruct;

@end
