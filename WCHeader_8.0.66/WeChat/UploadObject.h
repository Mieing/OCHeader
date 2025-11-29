@class FileFragment, UploadElement, NSString;

@interface UploadObject : NSObject <NSObject>

@property (retain, nonatomic) FileFragment *m_filefragment;
@property (retain, nonatomic) UploadElement *m_uploadElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUploadElement:(id)a0 fileFragment:(id)a1;
- (void).cxx_destruct;

@end
