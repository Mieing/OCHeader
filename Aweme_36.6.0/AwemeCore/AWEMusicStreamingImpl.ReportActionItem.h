@class NSString, _TtC21AWEMusicStreamingImpl9LunaMedia, NSArray;

@interface AWEMusicStreamingImpl.ReportActionItem : NSObject {
    void /* function */ actionType;
    void /* function */ sceneName;
    void /* function */ queueType;
    void /* function */ feedRequestID;
    void /* function */ feedRelatedItems;
}

@property (nonatomic, copy) NSString *actionType;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl9LunaMedia *lunaMedia;
@property (nonatomic, copy) NSString *sceneName;
@property (nonatomic, copy) NSString *queueType;
@property (nonatomic) BOOL isCollected;
@property (nonatomic) BOOL needReportFeed;
@property (nonatomic, copy) NSString *feedRequestID;
@property (nonatomic, copy) NSArray *feedRelatedItems;

- (id)initWithMedia:(id)a0 sceneName:(id)a1 queueType:(id)a2 isCollected:(BOOL)a3 needReportFeed:(BOOL)a4 feedRequestID:(id)a5 feedRelatedItems:(id)a6;
- (void).cxx_destruct;
- (id)init;

@end
