@class NSData, NSMutableData, NSObject;

@interface MiniPBCoder : NSObject {
    NSObject *m_obj;
    NSData *m_inputBuffer;
    struct MiniCodedInputData { char *x0; int x1; int x2; } *m_inputData;
    NSMutableData *m_outputBuffer;
    struct MiniCodedOutputData { char *x0; unsigned long long x1; int x2; } *m_outputData;
    struct vector<MiniPBEncodeItem, std::__1::allocator<MiniPBEncodeItem> > { struct MiniPBEncodeItem *x0; struct MiniPBEncodeItem *x1; struct __compressed_pair<MiniPBEncodeItem *, std::__1::allocator<MiniPBEncodeItem> > { struct MiniPBEncodeItem *x0; } x2; } *m_encodeItems;
}

+ (id)decodeContainerOfClass:(Class)a0 withValueClass:(Class)a1 fromData:(id)a2;
+ (id)encodeDataWithObject:(id)a0;
+ (BOOL)isMiniPBCoderCompatibleObject:(id)a0;
+ (BOOL)isMiniPBCoderCompatibleType:(Class)a0;
+ (id)decodeObjectOfClass:(Class)a0 fromData:(id)a1;

- (unsigned long long)prepareObjectForEncode:(id)a0;
- (void)writeRootObject;
- (id)initForWritingWithTarget:(id)a0;
- (id)getEncodeData;
- (id)decodeOneObject:(id)a0 ofClass:(Class)a1;
- (id)decodeOneDictionaryOfValueClass:(Class)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initForReadingWithData:(id)a0;

@end
