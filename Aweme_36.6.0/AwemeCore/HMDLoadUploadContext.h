@class NSString, NSURL, NSMutableArray, HMDLoadUploadBackgroundSession;

@interface HMDLoadUploadContext : NSObject {
    struct HMDLoadUploadOption { char *host; char *appID; struct __CFDictionary *headerField; struct __CFDictionary *queryItems; char *eventType; } _option;
    NSString *_uploadDirectory;
    NSMutableArray *_queryItems;
    HMDLoadUploadBackgroundSession *_session;
    NSURL *_uploadingURL;
    NSString *_uploadingPath;
}

+ (id)contextWithOption:(struct HMDLoadUploadOption { char *x0; char *x1; struct __CFDictionary *x2; struct __CFDictionary *x3; char *x4; } *)a0 uploadDirectory:(id)a1 uploadPath:(id)a2;

- (id)initWithOption:(struct HMDLoadUploadOption { char *x0; char *x1; struct __CFDictionary *x2; struct __CFDictionary *x3; char *x4; } *)a0 uploadDirectory:(id)a1 uploadPath:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
