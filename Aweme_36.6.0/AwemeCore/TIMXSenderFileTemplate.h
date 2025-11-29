@class NSURL, NSString, NSDictionary;

@interface TIMXSenderFileTemplate : MTLModel <TIMXSendFileModelProtocol, TIMXInstanceScopeAlwaysNewDIComponent>

@property (copy, nonatomic) NSURL *localURL;
@property (copy, nonatomic) NSString *remotePath;
@property (copy, nonatomic) NSString *displayType;
@property (nonatomic) long long length;
@property (copy, nonatomic) NSString *md5;
@property (copy, nonatomic) NSString *mime;
@property (copy, nonatomic) NSString *fileExtension;
@property (copy, nonatomic) NSDictionary *ext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
