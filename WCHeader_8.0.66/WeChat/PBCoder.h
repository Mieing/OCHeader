@class NSData, NSNumberFormatter, NSMutableData;
@protocol PBCoding;

@interface PBCoder : NSObject {
    id<PBCoding> m_obj;
    BOOL m_isTopObject;
    NSData *m_inputData;
    struct CodedInputData { char *x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; } *m_inputStream;
    NSNumberFormatter *m_numberFormatter;
    NSMutableData *m_outputData;
    struct CodedOutputData { char *x0; unsigned long long x1; int x2; } *m_outputStream;
    void *m_encodeItems;
}

+ (id)encodeObject:(id)a0 withPropertyTable:(id)a1;
+ (BOOL)encodeObject:(id)a0 withPropertyTable:(id)a1 toFile:(id)a2;
+ (BOOL)decodeObject:(id)a0 fromData:(id)a1 withProperty:(id)a2 andTagIndexMap:(const void *)a3;
+ (id)encodeDataWithObject:(id)a0;
+ (id)encodeDataWithSizeForObject:(id)a0;
+ (BOOL)encodeObject:(id)a0 toFile:(id)a1;
+ (id)decodeObjectOfClass:(Class)a0 fromFile:(id)a1;
+ (id)decodeObjectOfClass:(Class)a0 fromData:(id)a1;
+ (BOOL)decodeObject:(id)a0 fromFile:(id)a1;
+ (BOOL)decodeObject:(id)a0 fromData:(id)a1;
+ (id)decodeContainerOfClass:(Class)a0 withValueClass:(Class)a1 fromFile:(id)a2;
+ (id)decodeContainerOfClass:(Class)a0 withValueClass:(Class)a1 fromData:(id)a2;
+ (id)greedyDecodeContainerOfClass:(Class)a0 withValueClass:(Class)a1 fromData:(id)a2 hasError:(BOOL *)a3;
+ (BOOL)appendData:(id)a0 toPath:(id)a1;
+ (long long)getFiLeSize:(id)a0;
+ (BOOL)appendOneArrayValue:(id)a0 toFile:(id)a1;
+ (BOOL)appendOneSetValue:(id)a0 toFile:(id)a1;
+ (BOOL)appendOneDictionaryValue:(id)a0 forKey:(id)a1 toFile:(id)a2;
+ (BOOL)appendArray:(id)a0 toFile:(id)a1;
+ (BOOL)appendSet:(id)a0 toFile:(id)a1;
+ (BOOL)appendDictionary:(id)a0 toFile:(id)a1;
+ (BOOL)appendOneArrayValue:(id)a0 toData:(id)a1;
+ (BOOL)appendOneSetValue:(id)a0 toData:(id)a1;
+ (BOOL)appendOneDictionaryValue:(id)a0 forKey:(id)a1 toData:(id)a2;
+ (BOOL)appendArray:(id)a0 toData:(id)a1;
+ (BOOL)appendSet:(id)a0 toData:(id)a1;
+ (BOOL)appendDictionary:(id)a0 toData:(id)a1;

- (id)initForReadingWithData:(id)a0;
- (id)initForWritingWithTarget:(id)a0;
- (void)dealloc;
- (void)writeRootObject;
- (unsigned long long)prepareCPropertyForEndcode:(id)a0 withTarget:(id)a1;
- (unsigned long long)prepareCValueForEndcode:(int)a0 withValue:(id)a1 withTag:(unsigned int)a2;
- (unsigned long long)prepareBasicObjectForEncode:(id)a0 withPropertyType:(id)a1;
- (unsigned long long)prepareUnPackedContainerForEncode:(id)a0 withPropertyIndex:(int)a1 withSubCType:(int)a2;
- (unsigned long long)preparePBObjectForEncode:(id)a0 withPropertyTable:(id)a1;
- (unsigned long long)prepareObjectForEncode:(id)a0 withPropertyType:(id)a1;
- (id)getEncodeDataWithForceWriteSize:(BOOL)a0;
- (id)getEncodeDataWithPropertyTable:(id)a0;
- (id)decodeOneValueOfCType:(int)a0;
- (id)decodeOneArrayOfValueClass:(Class)a0 orValueCType:(int)a1 ignoreSize:(BOOL)a2 greedy:(BOOL)a3 hasError:(BOOL *)a4;
- (id)decodeOneSetOfValueClass:(Class)a0 orValueCType:(int)a1 ignoreSize:(BOOL)a2 greedy:(BOOL)a3 hasError:(BOOL *)a4;
- (id)decodeOneDictionaryOfValueClass:(Class)a0 orValueCType:(int)a1 ignoreSize:(BOOL)a2 greedy:(BOOL)a3 hasError:(BOOL *)a4;
- (void)decodeOne_C_Property:(id)a0 ofObject:(id)a1;
- (void)decodeOneProperty:(id)a0 ofObject:(id)a1;
- (void)decodeObject:(id)a0 withProperty:(id)a1 andTagIndexMap:(const void *)a2;
- (id)decodeOneObject:(id)a0 ofClass:(Class)a1;
- (id)decodeOneObject:(id)a0 withProperty:(id)a1 andTagIndexMap:(const void *)a2;
- (void).cxx_destruct;

@end
