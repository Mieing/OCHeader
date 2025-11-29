@class NSString;

@interface IESGurdUpdateChannelInfo : NSObject

@property (nonatomic) BOOL success;
@property (nonatomic) unsigned long long version;
@property (nonatomic) int errorCode;
@property (copy, nonatomic) NSString *errorMessage;

- (id)initWithVersion:(unsigned long long)a0 success:(BOOL)a1 errorCode:(int)a2 errorMessage:(id)a3;
- (void).cxx_destruct;

@end
