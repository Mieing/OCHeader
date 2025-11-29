@class NSString, NSMutableArray, TPDrmMediaAsset;
@protocol TPPlayerVideoPrivateDelegate;

@interface TPPlayerVideo : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableArray *slices;
@property (weak, nonatomic) id<TPPlayerVideoPrivateDelegate> privateDelegate;
@property (nonatomic) long long startPosUs;
@property (nonatomic) long long skipEndPosUs;
@property (readonly, nonatomic) long long durationUs;
@property (nonatomic) long long businessID;
@property (copy, nonatomic) NSString *source;
@property (retain, nonatomic) TPDrmMediaAsset *drmAsset;

- (id)init;
- (void)dealloc;
- (id)initWithSlice:(id)a0;
- (id)initWithSlices:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)sliceAtIndex:(long long)a0;
- (unsigned long long)indexOfSlice:(id)a0;
- (unsigned long long)sliceCount;
- (BOOL)containsURL:(id)a0;
- (void)appendSlice:(id)a0;
- (void)insertSlice:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeSlice:(id)a0;
- (void)enumerateSlicesUsingBlock:(id /* block */)a0;
- (void)removeAllSlices;
- (long long)durationUs;
- (id)description;
- (id)initWithString:(id)a0;
- (void).cxx_destruct;

@end
