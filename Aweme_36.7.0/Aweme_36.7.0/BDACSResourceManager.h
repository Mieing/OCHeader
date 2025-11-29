@class BDACSConfigModel, NSString;
@protocol BDACSResourceManagerDelegate;

@interface BDACSResourceManager : NSObject {
    BOOL _shouldUpload;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (readonly, nonatomic) BDACSConfigModel *config;
@property (readonly, copy, nonatomic) NSString *webURLString;
@property (readonly, copy, nonatomic) NSString *directoryPath;
@property (readonly, weak, nonatomic) id<BDACSResourceManagerDelegate> delegate;

- (id)initWithConfig:(id)a0 webURLString:(id)a1 delegate:(id)a2;
- (BOOL)writeData:(id)a0 asFilename:(id)a1;
- (id)dataWithFilename:(id)a0;
- (BOOL)removeFileItem:(id)a0 processorType:(unsigned long long)a1;
- (BOOL)writeString:(id)a0 asFilename:(id)a1;
- (void)setShouldUpload:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
