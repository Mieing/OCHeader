@class NSString, NSMutableArray;

@interface CAttach : NSObject <NSCoding>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *path;
@property (nonatomic) BOOL isCanPreview;
@property (nonatomic) BOOL isBigAttach;
@property (nonatomic) unsigned int size;
@property (nonatomic) unsigned int m_uiFileType;
@property (retain, nonatomic) NSMutableArray *m_arrFileList;
@property (retain, nonatomic) NSString *m_nsAttachID;
@property (retain, nonatomic) NSString *downloadUrl;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)GetAttachPic;
- (unsigned int)GetPreviewType;
- (id)GetAttachPath:(id)a0;
- (id)GetAttachTempPath:(id)a0;
- (id)GetAttachIDFromPath;
- (void).cxx_destruct;

@end
