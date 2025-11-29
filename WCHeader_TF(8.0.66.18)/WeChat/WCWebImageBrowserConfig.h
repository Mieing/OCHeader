@class NSMutableArray;

@interface WCWebImageBrowserConfig : MMObject

@property (nonatomic) BOOL enableBottomBar;
@property (retain, nonatomic) NSMutableArray *arrImageSourceInfos;
@property (retain, nonatomic) NSMutableArray *arrImageSearchInfos;

- (id)init;
- (void).cxx_destruct;

@end
