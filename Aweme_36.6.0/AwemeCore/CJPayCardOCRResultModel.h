@class NSString, NSData, NSDictionary;

@interface CJPayCardOCRResultModel : NSObject

@property (nonatomic) unsigned long long result;
@property (copy, nonatomic) NSString *cardNoStr;
@property (retain, nonatomic) NSData *imgData;
@property (copy, nonatomic) NSString *cropImgStr;
@property (nonatomic) BOOL isFromUploadPhoto;
@property (copy, nonatomic) NSString *idName;
@property (copy, nonatomic) NSString *idCode;
@property (copy, nonatomic) NSString *errorCode;
@property (copy, nonatomic) NSString *errorMessage;
@property (retain, nonatomic) NSDictionary *fxjResponseDict;
@property (retain, nonatomic) NSDictionary *onlyUploadResponseDict;
@property (retain, nonatomic) NSDictionary *creditCertDict;
@property (retain, nonatomic) NSString *metaFile;

- (void).cxx_destruct;
- (id)initWithResult:(unsigned long long)a0;

@end
