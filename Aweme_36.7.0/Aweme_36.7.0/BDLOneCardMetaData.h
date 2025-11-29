@class NSArray, NSString;

@interface BDLOneCardMetaData : NSObject

@property (retain) NSArray *pkg_paths;
@property (retain) NSString *pkg_md5;
@property (retain) NSString *version;
@property (retain) NSString *groupID;
@property (retain) NSString *cardID;
@property (retain) NSString *verify_url;
@property BOOL inner_developer;

- (void).cxx_destruct;

@end
