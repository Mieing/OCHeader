@class NSString, NSArray;

@interface CGFrontierAuthModel : NSObject <XPlayAuthInfoProtocol>

@property (copy, nonatomic) NSString *clientKey;
@property (copy, nonatomic) NSArray *commentID;
@property (copy, nonatomic) NSString *agreementID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)authWithDic:(id)a0;

- (void).cxx_destruct;

@end
