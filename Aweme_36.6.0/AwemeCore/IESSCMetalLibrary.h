@class NSArray, NSMutableDictionary;
@protocol MTLDevice;

@interface IESSCMetalLibrary : NSObject

@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) NSMutableDictionary *libraryCache;
@property (readonly, copy, nonatomic) NSArray *mtlLibraries;

- (void)registerDefaultLibrary;
- (BOOL)registerLibraryWithFilePath:(id)a0 error:(id *)a1;
- (void)unregisterLibraryWithFilePath:(id)a0;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0;
- (id)functionWithName:(id)a0;

@end
