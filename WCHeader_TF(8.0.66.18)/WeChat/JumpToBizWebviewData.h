@class NSString;

@interface JumpToBizWebviewData : MMObject

@property (retain, nonatomic) NSString *toUsername;
@property (retain, nonatomic) NSString *appID;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *extMsg;
@property (nonatomic) int webType;

- (void)dealloc;
- (void).cxx_destruct;

@end
