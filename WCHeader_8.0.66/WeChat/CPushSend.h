@class NSData;

@interface CPushSend : NSObject {
    unsigned short m_bufferLen;
}

@property (nonatomic) unsigned int m_subCmd;
@property (retain, nonatomic) NSData *m_buffer;

- (id)Encode;
- (BOOL)Decode:(id)a0;
- (void).cxx_destruct;

@end
