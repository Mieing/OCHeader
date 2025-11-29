@class NSArray, NSMutableDictionary;
@protocol MTLCommandQueue, MTLDevice;

@interface TAVMediaMTLContext : NSObject

@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) id<MTLCommandQueue> commandQueue;
@property (nonatomic) struct __CVMetalTextureCache { } *textureCache;
@property (retain, nonatomic) NSMutableDictionary *libraryCache;
@property (readonly, nonatomic) NSArray *libraries;

+ (id)sharedContext;

- (id)initWithDevice:(id)a0;
- (void)registerDefaultLibrary;
- (BOOL)registerLibrary:(id)a0;
- (void).cxx_destruct;

@end
