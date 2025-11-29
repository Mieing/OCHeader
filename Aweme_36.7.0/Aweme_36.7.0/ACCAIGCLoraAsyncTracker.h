@interface ACCAIGCLoraAsyncTracker : NSObject

+ (void)trackCreateLora;
+ (void)sendImageUploadResultTrack:(double)a0 extra:(id)a1 success:(BOOL)a2 uploadImageCount:(long long)a3 uploadSuccessCount:(long long)a4 errorCode:(long long)a5;
+ (void)sendImageUploadResultTrack:(double)a0 success:(BOOL)a1 uploadImageCount:(long long)a2 uploadSuccessCount:(long long)a3 errorCode:(long long)a4;

@end
