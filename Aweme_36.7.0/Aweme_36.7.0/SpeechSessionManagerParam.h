@class NSString;

@interface SpeechSessionManagerParam : NSObject

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *header;
@property (nonatomic) int connectTimeout;
@property (nonatomic) long long transportType;
@property (retain, nonatomic) NSString *dumpDir;
@property (retain, nonatomic) NSString *extra;

- (void)dealloc;

@end
