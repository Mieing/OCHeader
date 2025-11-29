@class AWEIMMessageAttachmentDownloadViewModel;
@protocol IESIMNetworkDownloadRequest;

@interface AWEIMFileAttachmentDownloaderContext : NSObject

@property (retain, nonatomic) id<IESIMNetworkDownloadRequest> request;
@property (retain, nonatomic) AWEIMMessageAttachmentDownloadViewModel *vm;

- (void).cxx_destruct;

@end
