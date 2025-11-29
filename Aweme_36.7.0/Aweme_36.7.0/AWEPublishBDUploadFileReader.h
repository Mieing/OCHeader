@class NSString, AWEPublishFileReadHandle;
@protocol AWEPublishBDUploadFileReaderDelegate;

@interface AWEPublishBDUploadFileReader : NSObject <BDExternFileReaderInterface>

@property (nonatomic) double waitTime;
@property (weak, nonatomic) id<AWEPublishBDUploadFileReaderDelegate> delegate;
@property (retain, nonatomic) AWEPublishFileReadHandle *readHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)getValueByKey:(long long)a0;
- (id)readOffset:(long long)a0 minSize:(int)a1 maxSize:(int)a2 error:(id *)a3;
- (void)close;
- (void).cxx_destruct;
- (int)open;
- (id)initWithDelegate:(id)a0;

@end
