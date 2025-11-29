@class NSError;

@interface AnimaXLoaderResponse : NSObject

@property (retain, nonatomic) id payload;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long payloadType;

+ (id)responseWithErrorMessage:(id)a0;
+ (id)responseWithPayload:(id)a0;
+ (id)responseWithError:(id)a0;

- (void).cxx_destruct;
- (id)initWithError:(id)a0;
- (id)initWithPayload:(id)a0;

@end
