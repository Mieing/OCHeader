@class NSString;

@interface PathTag : NSObject

@property (retain, nonatomic) NSString *path;
@property (nonatomic) int tag;

+ (id)makePath:(id)a0 tag:(int)a1;

- (void).cxx_destruct;

@end
