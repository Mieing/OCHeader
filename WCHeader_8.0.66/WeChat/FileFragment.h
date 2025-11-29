@class NSString, NSData;

@interface FileFragment : NSObject

@property (retain, nonatomic) NSString *m_filePath;
@property (retain, nonatomic) NSData *m_fragmentData;
@property (nonatomic) unsigned int m_packageIndex;
@property (nonatomic) unsigned int m_totalPackage;
@property (nonatomic) unsigned long long m_uploadId;

- (id)initWithPath:(id)a0 fragmentData:(id)a1 packageIndex:(unsigned int)a2 totalPackage:(unsigned int)a3 uploadId:(unsigned long long)a4;
- (unsigned long long)size;
- (void).cxx_destruct;

@end
