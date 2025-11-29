@class NSArray, NSString, AWEAwemeModel;

@interface AFDPaginatedProgressALbumPreviewVideoModel : NSObject <AFDProgressPreviewImageModelProtocol>

@property (copy, nonatomic) NSArray *URLList;
@property (copy, nonatomic) NSArray *pipImageURLs;
@property (nonatomic) long long indexInMultiContent;
@property (weak, nonatomic) AWEAwemeModel *awemeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)previewImageType;
- (void).cxx_destruct;

@end
