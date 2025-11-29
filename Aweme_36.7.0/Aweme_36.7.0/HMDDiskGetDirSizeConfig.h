@class NSString;
@protocol HMDDiskGetDirSizeDelegate;

@interface HMDDiskGetDirSizeConfig : NSObject

@property (copy, nonatomic) NSString *targetFilePath;
@property (nonatomic) unsigned long long scheme;
@property (weak, nonatomic) id<HMDDiskGetDirSizeDelegate> delegate;
@property (copy, nonatomic) id /* block */ switchBlock;

- (id)initWithTargetFilePath:(id)a0 scheme:(unsigned long long)a1 delegate:(id)a2 switchBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;

@end
