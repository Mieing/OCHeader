@class NSString, NSNumber;

@interface BDXGurdInfo : NSObject

@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *bundle;
@property (copy, nonatomic) NSString *accessKey;
@property (retain, nonatomic) NSNumber *geckoId;

- (void).cxx_destruct;

@end
