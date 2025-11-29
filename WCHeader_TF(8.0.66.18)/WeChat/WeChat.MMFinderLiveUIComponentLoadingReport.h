@interface WeChat.MMFinderLiveUIComponentLoadingReport : NSObject {
    void /* unknown type, empty encoding */ taskId;
    void /* unknown type, empty encoding */ commentScene;
    void /* unknown type, empty encoding */ feedID;
    void /* unknown type, empty encoding */ liveID;
}

+ (void)reportWithComponentType:(long long)a0 commentScene:(int)a1 feedID:(unsigned long long)a2 liveID:(unsigned long long)a3 duration:(unsigned int)a4 componentExtra:(id)a5;

- (id)initWithCommentScene:(int)a0 feedID:(unsigned long long)a1 liveID:(unsigned long long)a2;
- (id)initWithTaskId:(id)a0;
- (void)reportWithComponentType:(long long)a0 duration:(unsigned int)a1 componentExtra:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end
