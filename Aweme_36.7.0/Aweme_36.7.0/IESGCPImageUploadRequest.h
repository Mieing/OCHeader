@class NSArray, NSString;

@interface IESGCPImageUploadRequest : NSObject <IESGCPImageUploadRequestProtocol>

@property (retain, nonatomic) NSArray *images;
@property (copy, nonatomic) NSString *imageHostName;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *secretKey;
@property (copy, nonatomic) NSString *sessionToken;
@property (copy, nonatomic) NSString *serviceID;
@property (nonatomic) long long imageMaxLength;
@property (copy, nonatomic) NSString *traceID;
@property (copy, nonatomic) NSString *customedParameter;
@property (nonatomic) long long concurrentFileNum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithImages:(id)a0 hostName:(id)a1;
- (void).cxx_destruct;

@end
