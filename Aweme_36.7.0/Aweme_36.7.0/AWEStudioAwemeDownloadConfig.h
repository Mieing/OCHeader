@class NSString, AWEStudioAwemeDownloadTask;
@protocol AWEStudioAwemeModelProtocol;

@interface AWEStudioAwemeDownloadConfig : NSObject

@property (copy, nonatomic) NSString *draftFolderPath;
@property (retain, nonatomic) id<AWEStudioAwemeModelProtocol> aweme;
@property (retain, nonatomic) AWEStudioAwemeDownloadTask *task;
@property (copy, nonatomic) id /* block */ requestConfig;

- (void).cxx_destruct;

@end
