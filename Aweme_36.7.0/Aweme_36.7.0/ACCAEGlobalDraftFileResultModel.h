@class ACCURS, NSString;

@interface ACCAEGlobalDraftFileResultModel : NSObject <ACCAEGlobalDraftDownloadResultModelProtocol>

@property (nonatomic) unsigned long long fileType;
@property (retain, nonatomic) ACCURS *urs;
@property (copy, nonatomic) NSString *filePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
