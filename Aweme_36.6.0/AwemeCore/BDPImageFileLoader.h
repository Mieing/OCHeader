@class BDPUniqueID;

@interface BDPImageFileLoader : NSObject

@property (retain, nonatomic) BDPUniqueID *uniqueID;

+ (id)initWithUniqueID:(id)a0;

- (void)fetchImageForPath:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
