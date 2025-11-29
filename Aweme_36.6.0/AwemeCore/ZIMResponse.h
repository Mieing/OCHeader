@class NSString, NSDictionary, NSData, NSMutableArray;

@interface ZIMResponse : NSObject

@property (nonatomic) unsigned long long code;
@property (nonatomic) unsigned long long retCode;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSString *retCodeSub;
@property (copy, nonatomic) NSString *retMessageSub;
@property (retain, nonatomic) NSString *bizData;
@property (retain, nonatomic) NSDictionary *extInfo;
@property (retain, nonatomic) NSString *deviceToken;
@property (retain, nonatomic) NSString *videoFilePath;
@property (retain, nonatomic) NSData *imageContent;
@property (retain, nonatomic) NSMutableArray *cardImageContent;
@property (retain, nonatomic) NSMutableArray *faceImageContent;
@property (retain, nonatomic) NSData *faceData;
@property (retain, nonatomic) NSData *countryData;

- (id)initWithResponseCode:(unsigned long long)a0 retCode:(unsigned long long)a1 retCodeSub:(id)a2 retMessageSub:(id)a3 reason:(id)a4 extParam:(id)a5 bizData:(id)a6;
- (void).cxx_destruct;

@end
