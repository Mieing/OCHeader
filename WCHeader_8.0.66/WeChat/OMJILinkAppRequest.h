@class NSNumber, NSString;

@interface OMJILinkAppRequest : NSObject

@property (retain, nonatomic) NSNumber *commandID;
@property (retain, nonatomic) NSNumber *timeoutMillis;
@property (retain, nonatomic) NSString *URL;
@property (retain, nonatomic) NSNumber *retryCount;
@property (retain, nonatomic) NSNumber *limitFlow;
@property (retain, nonatomic) NSNumber *limitFrequency;
@property (retain, nonatomic) NSNumber *netType;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
