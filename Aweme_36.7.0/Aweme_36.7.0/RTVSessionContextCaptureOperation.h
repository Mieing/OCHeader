@class NSString, NSObject;

@interface RTVSessionContextCaptureOperation : NSObject

@property (readonly, nonatomic) BOOL open;
@property (readonly, copy, nonatomic) NSString *modifyReason;
@property (retain, nonatomic) NSObject *operationToken;

+ (id)operationWithOpen:(BOOL)a0 reason:(id)a1;

- (id)initWithOpen:(BOOL)a0 reason:(id)a1;
- (void).cxx_destruct;

@end
