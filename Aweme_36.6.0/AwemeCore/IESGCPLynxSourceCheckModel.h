@class NSString, NSNumber;

@interface IESGCPLynxSourceCheckModel : NSObject

@property (copy, nonatomic) NSString *channelName;
@property (retain, nonatomic) NSNumber *serverVersion;

- (void).cxx_destruct;
- (id)init;

@end
