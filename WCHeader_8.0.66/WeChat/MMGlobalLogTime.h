@class NSMutableDictionary;

@interface MMGlobalLogTime : NSObject {
    NSMutableDictionary *m_dic;
    NSMutableDictionary *m_dicProc;
}

+ (id)sharedMMGlobalLogTime;

- (id)init;
- (void)dealloc;
- (void)start:(id)a0 withStep:(const char *)a1;
- (void)needreport:(id)a0 withEventId:(unsigned int)a1;
- (void)end:(id)a0;
- (void).cxx_destruct;

@end
