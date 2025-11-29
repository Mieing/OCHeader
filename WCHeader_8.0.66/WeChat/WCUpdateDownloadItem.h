@class NSString, NSMutableArray, ResourceMeta;

@interface WCUpdateDownloadItem : NSObject

@property (retain, nonatomic) NSString *baseID;
@property (retain, nonatomic) NSString *pid;
@property (retain, nonatomic) NSString *filePath;
@property (retain, nonatomic) ResourceMeta *resMeta;
@property (retain, nonatomic) NSMutableArray *customInfos;

- (void).cxx_destruct;

@end
