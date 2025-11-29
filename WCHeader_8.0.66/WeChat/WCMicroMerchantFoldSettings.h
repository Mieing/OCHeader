@class WCMicroMerchantFoldInfo, NSObject;
@protocol OS_dispatch_queue;

@interface WCMicroMerchantFoldSettings : NSObject {
    NSObject<OS_dispatch_queue> *_dataQueue;
}

@property (readonly, nonatomic) BOOL isGenerating;
@property (readonly, nonatomic) WCMicroMerchantFoldInfo *foldInfo;

+ (id)foldInfoSavePath;

- (id)init;
- (void)willStartGenerating;
- (void)didFinishGeneratingWithUnfoldedUsernames:(id)a0;
- (id)generatedTime;
- (id)unfoldedUsernames;
- (void)asyncLoadFoldInfo;
- (void)asyncSaveFoldInfo;
- (void).cxx_destruct;

@end
