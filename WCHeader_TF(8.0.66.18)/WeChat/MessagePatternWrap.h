@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MessagePatternWrap : NSObject {
    NSObject<OS_dispatch_queue> *m_worker;
}

@property (retain, nonatomic) NSMutableArray *m_arrPatternList;
@property BOOL m_bChange;
@property (retain, nonatomic) NSString *m_nsChatName;

+ (id)GetPathOfPatternCacheWithPb:(id)a0;
+ (BOOL)isBrandContactMsg:(id)a0;
+ (long long)getParserType:(id)a0;

- (id)initWithChatName:(id)a0 andWorker:(id)a1;
- (void)dealloc;
- (void)LoadFromFile;
- (void)doSaveToFile:(id)a0 path:(id)a1;
- (void)SaveToFile;
- (void)RemoveFromFile;
- (id)GetPattern:(id)a0;
- (void)SetPattern:(id)a0;
- (void)DelMsg:(id)a0;
- (void)DelMsgPatten:(id)a0;
- (void).cxx_destruct;

@end
