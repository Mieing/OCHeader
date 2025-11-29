@class NSString, NSDictionary;

@interface BDPAppPageURL : NSObject

@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *queryString;
@property (copy, nonatomic) NSString *absoluteString;
@property (copy, nonatomic) NSDictionary *queryDictionary;
@property (copy, nonatomic) NSString *originPath;
@property (nonatomic) BOOL toRelaunch;
@property (nonatomic) BOOL isRedirectWeb;
@property (nonatomic) BOOL shouldForceHalfToFullScreen;
@property (nonatomic) BOOL isForceHalfToFullScreen;

- (id)initWithPath:(id)a0 queryDictionary:(id)a1;
- (BOOL)isEqualToPage:(id)a0;
- (id)initWithPath:(id)a0 queryString:(id)a1;
- (id)getLastSecondAppPageVCInArray:(id)a0;
- (void)markForceHalfToFullScreenIfNeeded:(id)a0 toFull:(BOOL)a1 from:(id)a2;
- (void).cxx_destruct;
- (id)description;
- (id)initWithURLString:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
