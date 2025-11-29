@class NSError;

@interface LVDataBridgeResult : NSObject

@property (retain, nonatomic) id data;
@property (retain, nonatomic) NSError *error;

+ (id)resultWithData:(id)a0 error:(id)a1;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 error:(id)a1;

@end
