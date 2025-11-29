@class NSString, NSData;

@interface XPlayMultiPartFormDataConstructor : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *fileName;
@property (copy, nonatomic) NSString *mimeType;
@property (copy, nonatomic) NSString *boundary;
@property (nonatomic) BOOL isFirst;

+ (long long)sizeWithPath:(id)a0;
+ (id)readDataFromFilePath:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

- (id)getPartBoundaryByIsFirst:(BOOL)a0 orIsLast:(BOOL)a1;
- (id)getHeader;
- (id)getBoundaryHeader;
- (id)getBoundaryFooter;
- (unsigned long long)getTotalSize;
- (id)initWithName:(id)a0 data:(id)a1 boundary:(id)a2 isFirst:(BOOL)a3;
- (id)initWithName:(id)a0 filePath:(id)a1 fileName:(id)a2 mineType:(id)a3 boundary:(id)a4 isFirst:(BOOL)a5;
- (id)dataLengthIndex:(unsigned long long)a0 WithMaxLength:(unsigned long long)a1 isLastPart:(BOOL)a2;
- (unsigned long long)getTotalSizeIsLastPart:(BOOL)a0;
- (void).cxx_destruct;

@end
