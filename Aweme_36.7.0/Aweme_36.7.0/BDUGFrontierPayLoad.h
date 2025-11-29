@class NSString, NSDictionary, BDUGFrontierAlert, BDUGFrontierAps, NSError;

@interface BDUGFrontierPayLoad : NSObject

@property (retain, nonatomic) BDUGFrontierAps *aps;
@property (retain, nonatomic) BDUGFrontierAlert *alert;
@property (copy, nonatomic) NSString *soundURL;
@property (copy, nonatomic) NSString *imageURL;
@property (nonatomic) long long groupID;
@property (copy, nonatomic) NSString *openURL;
@property (copy, nonatomic) NSString *importance;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSString *rid;
@property (copy, nonatomic) NSString *rid64;
@property (copy, nonatomic) NSString *extraStr;
@property (nonatomic) long long pushShowType;
@property (copy, nonatomic) NSError *aError;

- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;

@end
