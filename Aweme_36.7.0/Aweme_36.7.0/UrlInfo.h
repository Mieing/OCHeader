@class NSString;

@interface UrlInfo : NSObject

@property (copy) NSString *url;
@property (copy) NSString *path;
@property (copy) NSString *fileName;

- (id)initWithConfig:(id)a0 fileName:(id)a1 fullPath:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
