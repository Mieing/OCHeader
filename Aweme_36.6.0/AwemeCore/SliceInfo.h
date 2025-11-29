@class NSString, TTUploadTaskParam;

@interface SliceInfo : NSObject

@property (copy) NSString *sliceId;
@property (copy) NSString *realUrl;
@property unsigned long long status;
@property (retain) TTUploadTaskParam *userParam;
@property long long startRange;
@property long long endRange;
@property (weak) id errorServerResponse;

- (void).cxx_destruct;
- (id)init;

@end
