@protocol UploadImageCDNMgrDelegate;

@interface ImageUploadUnifyBaseMgr : NSObject

@property (nonatomic) BOOL bJustUploadDataWithoutMD5Hit;
@property (weak, nonatomic) id<UploadImageCDNMgrDelegate> m_delegate;

- (BOOL)IsUploading:(id)a0;
- (unsigned int)GetUploadPercent:(id)a0;
- (void)StartUploadImage:(id)a0;
- (void)StopUploadImage:(id)a0;
- (void)StopUploadImageByUsrName:(id)a0;
- (void)CheckQueue;
- (void).cxx_destruct;

@end
