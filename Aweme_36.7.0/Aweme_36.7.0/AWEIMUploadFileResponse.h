@class NSString, AWEIMUploadFileResultItem, AWEURLModel;

@interface AWEIMUploadFileResponse : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *urlModel;
@property (retain, nonatomic) AWEIMUploadFileResultItem *originItem;
@property (retain, nonatomic) AWEIMUploadFileResultItem *quickItem;
@property (nonatomic) BOOL fromCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
