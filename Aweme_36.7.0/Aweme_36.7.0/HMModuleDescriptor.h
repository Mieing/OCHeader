@class NSString, NSArray;

@interface HMModuleDescriptor : NSObject

@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSArray *jsonPaths;
@property (nonatomic) BOOL isUseSharedThread;
@property (nonatomic) BOOL isForceSingleUpload;
@property (nonatomic) BOOL isWorkForCloudCommand;
@property (nonatomic) BOOL isWorkForSettings;
@property (nonatomic) BOOL isWorkForDowngrade;
@property (nonatomic) BOOL isWorkForTagChecking;
@property (copy, nonatomic) id /* block */ uploadInfoHandler;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;

@end
