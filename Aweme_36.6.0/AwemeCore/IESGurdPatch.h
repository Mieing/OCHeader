@class NSString, NSMutableSet, NSError, NSData;

@interface IESGurdPatch : NSObject

@property (copy, nonatomic) NSString *mSrc;
@property (copy, nonatomic) NSString *mDest;
@property (copy, nonatomic) NSString *mPatch;
@property (nonatomic) int mVersion;
@property (retain, nonatomic) NSError *mError;
@property (retain, nonatomic) NSMutableSet *mPathHandled;
@property (retain, nonatomic) NSString *mErrorPrefix;
@property (retain, nonatomic) NSData *mPatchData;
@property (nonatomic) long long mPatchIndex;

+ (id)getRelativePath:(id)a0 root:(id)a1;

- (BOOL)createDir:(id)a0;
- (BOOL)patch:(id)a0 dest:(id)a1 patch:(id)a2 error:(id *)a3;
- (BOOL)checkParams:(id)a0 dest:(id)a1 patch:(id)a2;
- (BOOL)doPatch;
- (void)setupError:(long long)a0 msg:(id)a1;
- (BOOL)readBytes:(char *)a0 len:(long long)a1;
- (id)bytesToString:(char *)a0 len:(long long)a1;
- (BOOL)handlePatch;
- (BOOL)traversalSrc:(id)a0;
- (id)readUTF;
- (BOOL)handleTypeModify:(id)a0 oldFile:(id)a1;
- (BOOL)writeContentToFile:(id)a0 relativePath:(id)a1;
- (BOOL)checkMD5:(id)a0;
- (BOOL)handleTypeRename:(id)a0 oldFile:(id)a1;
- (id)readMD5;
- (BOOL)copy:(id)a0 dest:(id)a1;
- (void).cxx_destruct;
- (id)readData:(long long)a0;
- (char)readByte;
- (long long)readLong;
- (short)readUnsignedShort;

@end
