@class CBaseFile, NSString;

@interface WAFileDescriptorLogicFileWrap : MMObject

@property (retain, nonatomic) CBaseFile *baseFile;
@property (copy, nonatomic) NSString *appId;
@property (nonatomic) BOOL isTmpOrStoreFile;
@property (nonatomic) int flag;

- (id)initWithBaseFile:(id)a0 appId:(id)a1;
- (void).cxx_destruct;

@end
