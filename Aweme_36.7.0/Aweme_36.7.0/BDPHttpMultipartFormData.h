@class NSString, NSMutableArray;

@interface BDPHttpMultipartFormData : NSObject

@property (retain, nonatomic) NSMutableArray *HTTPBodyParts;
@property (nonatomic) unsigned long long stringEncoding;
@property (copy, nonatomic) NSString *boundary;

- (void)appendPartWithFileData:(id)a0 name:(id)a1 fileName:(id)a2 mimeType:(id)a3;
- (void)appendPartWithFormData:(id)a0 name:(id)a1;
- (void)appendPartWithHeaders:(id)a0 body:(id)a1;
- (id)getContentType;
- (void)appendPartFormDataDic:(id)a0;
- (id)finalFormData;
- (void).cxx_destruct;
- (id)init;

@end
