@class NSString, NSMutableSet;

@interface AWEPackLoaderMeta : NSObject

@property (retain, nonatomic) NSString *loaderID;
@property (retain, nonatomic) Class loader;
@property (retain, nonatomic) NSMutableSet *dependingLoaderIDs;
@property (retain, nonatomic) NSMutableSet *dependedLoaderIDs;
@property (nonatomic) BOOL isCore;

- (id)initWithLoader:(Class)a0 isCore:(BOOL)a1;
- (void).cxx_destruct;

@end
