@class NSString, NSDictionary, NSArray, APBBisUploadGwRequest;

@interface ZimValidateRequest : NSObject

@property (retain, nonatomic) NSString *zimId;
@property (retain, nonatomic) APBBisUploadGwRequest *zimData;
@property (retain, nonatomic) NSDictionary *bizData;
@property (retain, nonatomic) NSString *idString;
@property (retain, nonatomic) NSString *nameString;
@property (retain, nonatomic) NSString *externParam;
@property (retain, nonatomic) NSDictionary *wishDict;
@property (retain, nonatomic) NSDictionary *chameleon;
@property (retain, nonatomic) NSArray *wishVideoUrl;
@property (retain, nonatomic) NSArray *wishAudioUrl;
@property (retain, nonatomic) NSString *originAliyunEncToken;
@property (retain, nonatomic) NSString *rareCharIdString;
@property (retain, nonatomic) NSString *rareCharNameString;
@property (copy, nonatomic) NSDictionary *evidenceVideo;
@property (retain, nonatomic) NSString *sysTime;
@property (nonatomic) BOOL useBackupOSS;

+ (Class)bizDataElementClass;

- (void).cxx_destruct;

@end
