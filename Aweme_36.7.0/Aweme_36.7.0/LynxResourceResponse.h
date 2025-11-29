@class NSError;

@interface LynxResourceResponse : NSObject

@property (readonly, nonatomic) id data;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) long long code;

- (id)initWithError:(id)a0 code:(long long)a1;
- (void).cxx_destruct;
- (BOOL)success;
- (id)initWithData:(id)a0;

@end
