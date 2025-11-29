@protocol TPDLProxyAdapterDelegate;

@interface TPDLProxyAdapterManager : NSObject {
    id<TPDLProxyAdapterDelegate> mAdapter;
}

+ (id)getInstance;

- (id)init;
- (void)setAdapter:(id)a0;
- (id)getOfflineRecordVinfo:(id)a0 withFormat:(id)a1;
- (long long)getOfflineRecordDurationWithVid:(id)a0 format:(id)a1;
- (void).cxx_destruct;

@end
