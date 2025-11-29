@class NSString, NSMutableDictionary;

@interface IESGurdUpdateResult : NSObject

@property (nonatomic) BOOL success;
@property (nonatomic) int errorCode;
@property (copy, nonatomic) NSString *errorMessage;
@property (nonatomic) unsigned long long version;
@property (copy, nonatomic) NSString *accessKey;
@property (retain, nonatomic) NSMutableDictionary *channelInfos;

- (id)initWithAccessKey:(id)a0 success:(BOOL)a1 errorCode:(int)a2 errorMessage:(id)a3;
- (void).cxx_destruct;

@end
