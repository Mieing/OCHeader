@class NSString;

@interface IESECActionRecordFailureNode : IESECActionRecordBaseNode

@property (nonatomic) unsigned long long errorType;
@property (readonly, nonatomic) NSString *errorTypeString;
@property (copy, nonatomic) NSString *errorCode;
@property (copy, nonatomic) NSString *errorMessage;

- (id)initWithAction:(unsigned long long)a0 errorType:(unsigned long long)a1 errorCode:(id)a2 errorMessage:(id)a3;
- (void).cxx_destruct;

@end
