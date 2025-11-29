@class NSString, AWESolariaNearLineRequestBody;

@interface AWESolariaNearLineDelaySendBody : NSObject

@property (nonatomic) long long timestamp;
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) AWESolariaNearLineRequestBody *body;
@property (nonatomic) long long delay;

- (void).cxx_destruct;

@end
