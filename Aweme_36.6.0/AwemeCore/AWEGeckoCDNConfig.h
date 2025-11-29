@class NSString, NSArray, NSCache;

@interface AWEGeckoCDNConfig : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSArray *bundleArray;
@property (copy, nonatomic) NSString *channelName;
@property (copy, nonatomic) NSString *resourceDirectory;
@property (copy, nonatomic) NSString *cdnDomain;
@property (copy, nonatomic) id /* block */ cdnPathPart;
@property (retain, nonatomic) NSCache *cache;
@property (retain, nonatomic) NSCache *commonCache;
@property (retain, nonatomic) NSCache *bundleCache;
@property (nonatomic) BOOL enableOpt;
@property (copy, nonatomic) id /* block */ loadResourceBlock;

- (void).cxx_destruct;

@end
