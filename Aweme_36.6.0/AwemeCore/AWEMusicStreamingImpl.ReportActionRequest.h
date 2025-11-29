@class NSArray;

@interface AWEMusicStreamingImpl.ReportActionRequest : AWEMusicStreamingImpl.LunaRequestBaseModel {
    void /* function */ actions;
}

@property (nonatomic, copy) NSArray *actions;

- (Class)responseModelClass;
- (void).cxx_destruct;
- (id)init;
- (id)params;
- (id)path;

@end
