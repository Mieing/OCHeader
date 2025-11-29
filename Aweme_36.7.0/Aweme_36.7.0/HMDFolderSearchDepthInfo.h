@class NSString, NSNumber, NSMutableDictionary;

@interface HMDFolderSearchDepthInfo : NSObject

@property (copy, nonatomic) NSString *path;
@property (retain, nonatomic) NSNumber *searchDepth;
@property (retain, nonatomic) NSMutableDictionary *subFolders;

- (void).cxx_destruct;
- (id)init;

@end
