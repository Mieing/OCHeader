@class NSNumber, NSString;

@interface BDPSocketCloseInfoIG : BDModel

@property (copy, nonatomic) NSNumber *code;
@property (copy, nonatomic) NSString *reason;

- (void).cxx_destruct;

@end
