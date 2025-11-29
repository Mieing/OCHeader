@class NSString, NSArray;

@interface EcTaskReq : NSObject

@property (copy, nonatomic) NSString *taskKey;
@property (retain, nonatomic) NSArray *assetIds;
@property (copy, nonatomic) NSString *downloadFolder;
@property (nonatomic) BOOL useMobile;

- (void).cxx_destruct;

@end
