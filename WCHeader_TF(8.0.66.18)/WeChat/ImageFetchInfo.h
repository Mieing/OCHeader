@class NSString;

@interface ImageFetchInfo : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *urlString;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *path;

- (id)initWithName:(id)a0 urlString:(id)a1 md5:(id)a2;
- (void).cxx_destruct;

@end
