@class NSString;

@interface TTVideoEngineCopyCacheItem : NSObject

@property (copy, nonatomic) NSString *destPath;
@property (copy, nonatomic) NSString *fileKey;
@property (nonatomic) BOOL waitIfCaching;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) BOOL forceCopy;
@property (copy, nonatomic) id /* block */ infoBlock;

- (id)initWithKey:(id)a0 destPath:(id)a1 completionBlock:(id /* block */)a2;
- (id)initWithKey:(id)a0 destPath:(id)a1 waitIfCaching:(BOOL)a2 completionBlock:(id /* block */)a3;
- (id)initWithKey:(id)a0 destPath:(id)a1 forceCopy:(BOOL)a2 infoBlock:(id /* block */)a3 completionBlock:(id /* block */)a4;
- (id)initWithKey:(id)a0 destPath:(id)a1 waitIfCaching:(BOOL)a2 forceCopy:(BOOL)a3 infoBlock:(id /* block */)a4 completionBlock:(id /* block */)a5;
- (void).cxx_destruct;

@end
