@class NSNumber, NSString;

@interface BDPSocketCloseInfo : BDModel

@property (copy, nonatomic) NSNumber *code;
@property (copy, nonatomic) NSString *reason;

- (void).cxx_destruct;

@end
