@class NSData;

@interface GPBCodedInputStream : NSObject {
    struct GPBCodedInputStreamState { char *bytes; unsigned long long bufferSize; unsigned long long bufferPos; unsigned long long currentLimit; int lastTag; unsigned long long recursionDepth; } state_;
    NSData *buffer_;
}

+ (id)streamWithData:(id)a0;

- (id)readModelWithDescriptor:(id)a0 adapter:(id)a1 reuseDict:(id)a2 error:(id *)a3;
- (void)readDictEntry:(id)a0 fromField:(id)a1 reuseDict:(id)a2;
- (void)readDict:(id)a0 withDescriptor:(id)a1 reuseDict:(id)a2;
- (unsigned long long)readUInt64;
- (unsigned long long)position;
- (int)readSFixed32;
- (long long)readInt64;
- (void)checkLastTagWas:(int)a0;
- (unsigned int)readFixed32;
- (long long)readSFixed64;
- (BOOL)skipField:(int)a0;
- (id)initWithData:(id)a0;
- (float)readFloat;
- (double)readDouble;
- (unsigned long long)pushLimit:(unsigned long long)a0;
- (void)readUnknownGroup:(int)a0 message:(id)a1;
- (void)readMapEntry:(id)a0 extensionRegistry:(id)a1 field:(id)a2 parentMessage:(id)a3;
- (void)readMessage:(id)a0 extensionRegistry:(id)a1;
- (int)readEnum;
- (void)readGroup:(int)a0 message:(id)a1 extensionRegistry:(id)a2;
- (void)skipMessage;
- (long long)readSInt64;
- (int)readInt32;
- (unsigned int)readUInt32;
- (id)readBytes;
- (unsigned long long)readFixed64;
- (BOOL)isAtEnd;
- (id)readString;
- (BOOL)readBool;
- (int)readTag;
- (void)popLimit:(unsigned long long)a0;
- (void)dealloc;
- (int)readSInt32;

@end
