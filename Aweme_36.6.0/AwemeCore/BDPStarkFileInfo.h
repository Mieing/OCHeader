@class NSString;

@interface BDPStarkFileInfo : NSObject

@property (retain, nonatomic) NSString *path;
@property (nonatomic) long long size;
@property (nonatomic) long long creationTime;
@property (nonatomic) long long lastModifyTime;

- (void).cxx_destruct;

@end
