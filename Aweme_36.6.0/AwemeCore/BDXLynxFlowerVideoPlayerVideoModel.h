@class NSString, NSArray;

@interface BDXLynxFlowerVideoPlayerVideoModel : NSObject

@property (nonatomic) BOOL isCanPlay;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *playUrlString;
@property (nonatomic) BOOL repeated;
@property (copy, nonatomic) NSString *customhost;
@property (copy, nonatomic) NSString *playAutoToken;
@property (copy, nonatomic) NSString *playerVersion;
@property (copy, nonatomic) NSString *protocolVer;
@property (retain, nonatomic) NSArray *hosts;
@property (nonatomic) unsigned long long apiVersion;

- (void).cxx_destruct;

@end
