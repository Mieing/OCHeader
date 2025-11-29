@class NSString;

@interface ErrInfo : NSObject

@property (nonatomic) unsigned int errNumber;
@property (retain, nonatomic) NSString *errMsg;

- (id)initWithErrNumber:(unsigned int)a0 errMsg:(id)a1;
- (void).cxx_destruct;

@end
