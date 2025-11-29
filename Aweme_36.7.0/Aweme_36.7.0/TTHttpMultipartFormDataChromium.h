@class NSString, NSMutableArray;

@interface TTHttpMultipartFormDataChromium : TTHttpMultipartFormData <NSCopying>

@property (retain, nonatomic) NSMutableArray *HTTPBodyParts;
@property (nonatomic) unsigned long long stringEncoding;
@property (copy, nonatomic) NSString *boundary;
@property (nonatomic) BOOL isFinal;

- (void)appendPartWithFileData:(id)a0 name:(id)a1 fileName:(id)a2 mimeType:(id)a3;
- (void)appendPartWithFormData:(id)a0 name:(id)a1;
- (void)appendPartWithHeaders:(id)a0 body:(id)a1;
- (id)finalFormDataWithHttpRequest:(id)a0;
- (id)getContentType;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
