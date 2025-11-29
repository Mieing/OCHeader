@class NSString;

@interface QBWebDebugConfig : NSObject

@property (retain, nonatomic) NSString *businessID;
@property (retain, nonatomic) NSString *randomKey;
@property (nonatomic) BOOL isLive;

+ (id)configWithURL:(id)a0;

- (void).cxx_destruct;

@end
