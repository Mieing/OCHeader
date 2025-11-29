@class NSString;

@interface BDCLUPnPTransportInfo : NSObject

@property (copy, nonatomic) NSString *currentTransportState;
@property (copy, nonatomic) NSString *currentTransportStatus;
@property (copy, nonatomic) NSString *currentSpeed;
@property (copy, nonatomic) NSString *connectId;

- (void).cxx_destruct;
- (void)setArray:(id)a0;

@end
