@class NSMutableData, NSMutableArray, NSString;

@interface XPlayMultiRequestBody : NSObject

@property (retain, nonatomic) NSMutableArray *multiPartFormDatas;
@property (retain, nonatomic) NSMutableData *data;
@property (nonatomic) unsigned long long hadWrittenLength;
@property (copy, nonatomic) NSString *boundary;

- (void)appendPartWithFormData:(id)a0 name:(id)a1;
- (unsigned long long)getTotalLength;
- (void)appendPartWithFilePath:(id)a0 name:(id)a1 fileName:(id)a2 mimeType:(id)a3;
- (struct multiPartFormDataIndexInfo { unsigned long long x0; unsigned long long x1; BOOL x2; })writeDataInOutputStream:(id)a0 withMultiPartFormDataUploadData:(struct multiPartFormDataIndexInfo { unsigned long long x0; unsigned long long x1; BOOL x2; })a1 MaxLength:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)initWithBoundary:(id)a0;

@end
