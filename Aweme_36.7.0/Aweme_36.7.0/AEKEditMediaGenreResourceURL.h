@class NSURL;

@interface AEKEditMediaGenreResourceURL : NSObject

@property (nonatomic) unsigned long long mediaType;
@property (retain, nonatomic) NSURL *url;

- (id)initWith:(unsigned long long)a0 url:(id)a1;
- (void).cxx_destruct;

@end
