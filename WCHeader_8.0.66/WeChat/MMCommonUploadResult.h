@class NSString;

@interface MMCommonUploadResult : NSObject

@property (retain, nonatomic) NSString *uploadId;
@property (retain, nonatomic) NSString *fileId;
@property (retain, nonatomic) NSString *aesKey;
@property (retain, nonatomic) NSString *imgInfoBuffer;
@property (nonatomic) unsigned long long uploadSize;
@property (retain, nonatomic) NSString *bigFileSignature;

- (void).cxx_destruct;

@end
