@class NSString, NSArray;

@interface WCDBRouterInfo : NSObject {
    NSString *_database;
    NSArray *_associatedPaths;
}

@property (readonly, nonatomic) int tag;
@property (readonly, nonatomic) NSString *database;
@property (readonly, nonatomic) NSString *rawPathOfDatabase;
@property (readonly, nonatomic) NSArray *associatedPaths;
@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *curDBPath;
@property BOOL critical;

+ (id)infoWithTag:(int)a0 name:(id)a1 database:(id)a2 associatedPaths:(id)a3 critical:(BOOL)a4;

- (id)initWithTag:(int)a0 name:(id)a1 database:(id)a2 associatedPaths:(id)a3 critical:(BOOL)a4;
- (BOOL)checkPathMatch:(id)a0;
- (void).cxx_destruct;

@end
