@class NSString;

@interface WAUpoadFileFormMultiPart : NSObject {
    NSString *_header;
    NSString *_bodyFilePath;
    NSString *_bodyString;
    NSString *_footer;
    BOOL _isFirstPart;
    BOOL _isLastPart;
}

+ (id)arrayFormBodyObjectWithFileFieldName:(id)a0 fileName:(id)a1 filePath:(id)a2 formFields:(id)a3 boundary:(id)a4 contentLength:(unsigned long long *)a5;
+ (id)arrayFormDataWithFileFieldName:(id)a0 fileName:(id)a1 filePath:(id)a2 formFields:(id)a3 boundary:(id)a4 contentLength:(unsigned long long *)a5;
+ (id)arrayMultiPartWithFileFieldName:(id)a0 fileName:(id)a1 filePath:(id)a2 formFields:(id)a3 boundary:(id)a4;
+ (id)arrayFormBodyObjectWithMultiPart:(id)a0 contentLength:(unsigned long long *)a1;
+ (id)arrayFormDatatWithMultiPart:(id)a0 contentLength:(unsigned long long *)a1;
+ (id)boundary;
+ (id)firstPartBoundary:(id)a0;
+ (id)middlePartBoundary:(id)a0;
+ (id)finalBoundary:(id)a0;

- (id)header;
- (id)bodyFilePath;
- (id)bodyString;
- (id)footer;
- (void)markFirstPart;
- (void)markLastPart;
- (void)setFieldName:(id)a0 fieldValue:(id)a1 boundary:(id)a2;
- (void)setFileFieldName:(id)a0 fileName:(id)a1 filePath:(id)a2 boundary:(id)a3;
- (void).cxx_destruct;

@end
