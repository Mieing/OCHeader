@class AWECommentModel;

@interface AWECommentMediaDownloadOptions : AWEMediaDownloadOptions

@property (retain, nonatomic) AWECommentModel *commentModel;
@property (nonatomic) unsigned long long commentDownloadType;
@property (nonatomic) unsigned long long indexToDownload;

- (void).cxx_destruct;

@end
