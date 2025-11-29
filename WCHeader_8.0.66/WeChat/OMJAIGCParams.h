@class NSString, NSData;

@interface OMJAIGCParams : NSObject

@property (readonly, nonatomic) long long requestID;
@property (readonly, nonatomic) NSString *imageFilePath;
@property (readonly, nonatomic) NSData *aigcBuffer;

- (id)initWithRequestID:(long long)a0 imageFilePath:(id)a1;
- (id)initWithRequestID:(long long)a0 imageFilePath:(id)a1 aigcBuffer:(id)a2;
- (void).cxx_destruct;

@end
