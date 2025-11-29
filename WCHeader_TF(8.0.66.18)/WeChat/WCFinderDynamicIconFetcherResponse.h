@class UIImage, NSMutableArray;

@interface WCFinderDynamicIconFetcherResponse : NSObject

@property (nonatomic) BOOL filled;
@property (retain, nonatomic) NSMutableArray *updateBlocks;
@property (retain, nonatomic) UIImage *cacheImage;

+ (id)responseWithImage:(id)a0;

- (void)cancel;
- (void)notify:(id)a0;
- (void)addUpdateBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
