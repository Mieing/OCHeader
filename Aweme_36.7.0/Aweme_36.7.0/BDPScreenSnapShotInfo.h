@class NSError;

@interface BDPScreenSnapShotInfo : NSObject {
    id retainObj_;
}

@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (nonatomic) char *pixels;
@property (copy, nonatomic) NSError *error;

- (id)initWithObject:(id)a0 pixels:(char *)a1 width:(unsigned int)a2 height:(unsigned int)a3;
- (void).cxx_destruct;
- (id)initWithError:(id)a0;
- (void)dealloc;

@end
