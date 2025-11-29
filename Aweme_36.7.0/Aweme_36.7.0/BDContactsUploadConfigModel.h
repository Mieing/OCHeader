@class NSString, NSDictionary;

@interface BDContactsUploadConfigModel : NSObject

@property (retain, nonatomic) NSString *url;
@property (nonatomic) long long needEncrypt;
@property (retain, nonatomic) NSDictionary *paramsDict;
@property (retain, nonatomic) NSDictionary *headerField;
@property (copy, nonatomic) id /* block */ filterBlock;

- (void).cxx_destruct;

@end
