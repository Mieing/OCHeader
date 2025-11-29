@class NSString;

@interface BDLEMessageContext : NSObject

@property (nonatomic) long long uniReadTag;
@property (nonatomic) long long uniWriteTag;
@property (copy, nonatomic) NSString *connectId;

+ (id)sharedInstance;

- (void).cxx_destruct;

@end
