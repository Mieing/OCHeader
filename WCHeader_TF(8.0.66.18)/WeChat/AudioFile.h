@class NSString, NSFileHandle;

@interface AudioFile : NSObject <AudioDataRead> {
    NSFileHandle *m_fhFile;
    unsigned int m_uiDataWrited;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (BOOL)create:(id)a0;
- (BOOL)open:(id)a0;
- (BOOL)read:(id)a0;
- (void)close;
- (unsigned int)seekToEnd;
- (unsigned int)getLength;
- (BOOL)readBytes:(unsigned int)a0 len:(unsigned int *)a1 buffer:(void *)a2;
- (BOOL)writeBytes:(unsigned int)a0 len:(unsigned int)a1 buffer:(void *)a2;
- (BOOL)writeBytes:(unsigned int)a0 len:(unsigned int)a1 buffer:(void *)a2 sync:(BOOL)a3;
- (void)flush;
- (void).cxx_destruct;

@end
