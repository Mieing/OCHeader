@class NSString, NSArray, AWECodeGenCompressedUrlListModel;

@interface AWEImageAlbumBSModel : MTLModel <MTLJSONSerializing, IESImageAlbumBSModelProtocol>

@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSArray *urlList;
@property (copy, nonatomic) NSArray *downloadURLList;
@property (nonatomic) long long height;
@property (nonatomic) long long width;
@property (readonly, nonatomic) AWECodeGenCompressedUrlListModel *compressedUrlListModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
