@class NSString, NSArray;

@interface BDLOCMetaData : NSObject

@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSArray *urls;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *target;

- (void)setUpPkgUrlsWithTarget:(id)a0 dic:(id)a1 ttcode:(id)a2;
- (void).cxx_destruct;

@end
