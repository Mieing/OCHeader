@class NSString;

@interface BUTNCRequestParam : NSObject <BUDictionarify>

@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *deviceDid;
@property (copy, nonatomic) NSString *ssAppID;
@property (nonatomic) long long interval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)toDictionary;

@end
