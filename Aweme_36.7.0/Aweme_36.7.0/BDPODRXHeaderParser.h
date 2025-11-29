@class BDPODRXHeaderInfo, NSMutableDictionary, BDPPkgFileIndexInfo, NSData, NSMutableData, NSMutableArray, NSDate;
@protocol BDPPkgFileDecryptionProtocol;

@interface BDPODRXHeaderParser : NSObject {
    BOOL _canContinue;
    unsigned int _fileExtSize;
    unsigned int _fileCount;
    unsigned int _fileNameSize;
    unsigned long long _target;
    NSMutableData *_originalData;
    BDPODRXHeaderInfo *_fileInfo;
    BDPPkgFileIndexInfo *_curFileIndexModel;
}

@property (nonatomic) unsigned long long infoType;
@property (retain, nonatomic) NSMutableData *data;
@property (retain, nonatomic) NSMutableArray *fileIndexes;
@property (retain, nonatomic) NSMutableDictionary *fileIndexesDic;
@property (nonatomic) unsigned long long offset;
@property (retain, nonatomic) NSDate *beginDate;
@property (retain, nonatomic) id<BDPPkgFileDecryptionProtocol> pkgDecrypter;
@property (copy, nonatomic) id /* block */ versionValidateBlk;
@property (copy, nonatomic) id /* block */ completionBlk;
@property (readonly, copy, nonatomic) NSData *availableData;
@property (readonly, nonatomic) long long size;

- (void).cxx_destruct;
- (void)emptyData;
- (void)appendData:(id)a0;

@end
