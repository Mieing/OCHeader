@class HMDInfo, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HMDLoadUploadHelper : NSObject {
    struct { int x0; char x1[1024]; } *_LoadUploadRelativeInfoPtr;
    unsigned long long _mappedSize;
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_previousLoadUploadRelativeInfoData;
}

@property (retain, nonatomic) HMDInfo *info;

+ (id)urlWithHost:(id)a0 path:(id)a1;
+ (id)sharedHelper;

- (id)headerInfo;
- (void)_startRecordInjectedInfo;
- (void)loadUploadRelativeInfo:(struct { int x0; char x1[1024]; } *)a0;
- (id)cachedLoadUploadRelativeInfo;
- (void)recordLoadUploadRelativeInfo;
- (void)startRecordInjectedInfo;
- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
