@class NSString, NSURL;

@interface BDLynxBaseConfig : NSObject

@property (copy, nonatomic) NSString *groupID;
@property (retain, nonatomic) NSURL *rootDirURL;

- (id)initWithDictionary:(id)a0 groupID:(id)a1 rootDir:(id)a2;
- (id)initWithDictionary:(id)a0 groupID:(id)a1;
- (void).cxx_destruct;
- (void)updateWithDictionary:(id)a0;

@end
