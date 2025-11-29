@class NSString, NSDictionary;

@interface AWEBatManXplayAuthModel : NSObject <XPlayAuthProtocol>

@property (copy, nonatomic) NSString *clientKey;
@property (copy, nonatomic) NSDictionary *scope;
@property (copy, nonatomic) NSString *responseType;
@property (nonatomic) long long platform;
@property (copy, nonatomic) NSString *commentID;
@property (copy, nonatomic) NSString *agreementID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
