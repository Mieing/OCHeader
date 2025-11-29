@class NSArray;

@interface BDUGLuckyCountDownCache : NSObject {
    NSArray *_savedTaskIds;
}

@property (retain, nonatomic) NSArray *savedTaskIds;

+ (id)__convertToSaveKeyFromTaskId:(id)a0;
+ (void)clearAll;

- (id)__saveTaskContent:(long long)a0 expireTime:(double)a1 uploadToken:(id)a2;
- (id)__convertToSaveKeyFromTaskId:(id)a0;
- (void)__removeTaskProgressCache:(id)a0;
- (void)__triggerCacheExpire;
- (void)saveProgress:(long long)a0 forTask:(id)a1 expireTime:(double)a2 uploadToken:(id)a3;
- (long long)getSavedProgressForTask:(id)a0;
- (id)getSavedUploadTokenForTask:(id)a0;
- (void)clearSavedProgressForTask:(id)a0;
- (void).cxx_destruct;
- (void)clearAll;

@end
