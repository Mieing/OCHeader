@class NSString, NSMutableArray;

@interface YYWKGamePkgCachesStastics : NSObject

@property (retain, nonatomic) NSMutableArray *recordArray;
@property (retain, nonatomic) NSString *mainUrl;

- (id)init;
- (void)addRecord:(id)a0 mainUrl:(id)a1 data:(id)a2;
- (id)description;
- (void).cxx_destruct;

@end
