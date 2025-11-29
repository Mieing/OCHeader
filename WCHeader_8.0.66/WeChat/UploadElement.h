@class NSString, NSMutableDictionary;

@interface UploadElement : NSObject

@property (retain, nonatomic) NSMutableDictionary *m_fileInfos;
@property (retain, nonatomic) NSString *m_commextrainfo;
@property (retain, nonatomic) NSString *m_userName;

- (id)init;
- (BOOL)addFile:(id)a0 size:(unsigned long long)a1;
- (BOOL)addFile:(id)a0 startPos:(unsigned long long)a1 endPos:(unsigned long long)a2;
- (void).cxx_destruct;

@end
