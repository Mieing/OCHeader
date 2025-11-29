@class NSURL, BDLyxnChannelConfig, NSString;

@interface BDLynxBundle : NSObject

@property (retain, nonatomic) NSURL *singleFilePath;
@property (retain, nonatomic) NSURL *rootDirURL;
@property (retain, nonatomic) BDLyxnChannelConfig *channelConfig;
@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, copy, nonatomic) NSString *groupID;
@property (readonly, nonatomic) BOOL isSingleFile;
@property (copy) NSString *storagePath;

- (id)initWithRootDir:(id)a0 groupID:(id)a1;
- (id)lynxCardDataWithCardID:(id)a0;
- (id)lynxDataWithCardID:(id)a0;
- (id)initWithSingleBundleFileURL:(id)a0 groupID:(id)a1;
- (BOOL)updateDataWithRootDir:(id)a0;
- (BOOL)updateDataWithSingleBundleFile:(id)a0;
- (id)initWithBundlePath:(id)a0 group:(id)a1 error:(id *)a2;
- (id)lynxExtraDataWithCardID:(id)a0;
- (void).cxx_destruct;

@end
