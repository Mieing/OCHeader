@class NSString, NSDictionary;

@interface TMPrivacyBPEAInfoModel : NSObject

@property (copy, nonatomic) NSString *certToken;
@property (copy, nonatomic) NSString *entryToken;
@property (copy, nonatomic) NSDictionary *bpeaInfo;

- (id)initWithBPEAInfo:(id)a0;
- (id)jsonDict;
- (void).cxx_destruct;

@end
