@class NSString;

@interface BDByteCastPPBaseCmdResponse : BDByteCastPPBaseCmd

@property (nonatomic) long long code;
@property (copy, nonatomic) NSString *msg;

- (void).cxx_destruct;

@end
