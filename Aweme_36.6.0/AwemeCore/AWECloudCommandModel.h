@class NSArray, NSString, NSDictionary, NSNumber;

@interface AWECloudCommandModel : NSObject

@property (copy, nonatomic) NSArray *blockList;
@property (retain, nonatomic) NSNumber *commandId;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSDictionary *params;

- (id)allowedFilePathsAfterChecking:(id)a0;
- (void)configFileBlockList:(id)a0;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
