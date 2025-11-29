@class NSString;

@interface HMDBinaryImage : NSObject

@property (nonatomic) unsigned long long address;
@property (nonatomic) unsigned long long textSize;
@property (nonatomic) unsigned long long vm_slide;
@property (nonatomic) BOOL isExecutable;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *uuid;
@property (nonatomic) int cpuType;
@property (nonatomic) int cpuSubType;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) BOOL isFromAPP;

+ (void)getCachedBinaryImagesLogStrUsingCallback:(id /* block */)a0;
+ (id)linkedBinaryImages;
+ (id)findSharedCacheImages:(id)a0;
+ (id)binaryImagesLogStr;
+ (id)binaryImagesLogStrWithMustIncludeImagesNames:(id)a0 includePossibleJailbreakImage:(BOOL)a1;
+ (id)binaryImageWithMachoImage:(struct hmd_async_macho { unsigned long long x0; long long x1; char *x2; char x3[40]; struct mach_header { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } x4; unsigned long long x5; unsigned int x6; struct hmd_async_mem_range { unsigned long long x0; unsigned long long x1; } x7; struct hmd_async_mem_range { unsigned long long x0; unsigned long long x1; } x8; struct hmd_async_mem_range { unsigned long long x0; unsigned long long x1; } x9; struct hmd_async_mem_range { unsigned long long x0; unsigned long long x1; } x10; struct hmd_async_mem_range { unsigned long long x0; unsigned long long x1; } x11; struct hmd_async_segment *x12; int x13; struct hmd_async_section *x14; int x15; int x16; unsigned char x17[16]; BOOL x18; BOOL x19; unsigned long long x20; struct hmd_async_byteorder *x21; } *)a0;
+ (void)updateCachedBinaryImagesLogStrNoLock;
+ (void)updateCachedLinkedBinaryImagesIfNeed;
+ (id)findSharedCacheImages;
+ (void)enumerateImagesUsingBlock:(id /* block */)a0;

- (id)imageLogStringWithImageInfo;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
