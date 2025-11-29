@class NSURL, BDPUniqueID, NSString;

@interface BDPAppLoadURLInfo : NSObject

@property (copy, nonatomic) NSURL *requestURL;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) unsigned long long folder;
@property (copy, nonatomic) NSString *realPath;
@property (copy, nonatomic) NSString *pluginName;
@property (copy, nonatomic) NSString *webviewId;

- (void).cxx_destruct;

@end
