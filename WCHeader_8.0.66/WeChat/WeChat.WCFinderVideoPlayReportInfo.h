@class NSString;

@interface WeChat.WCFinderVideoPlayReportInfo : NSObject {
    void /* unknown type, empty encoding */ tid;
}

@property (nonatomic, copy) NSString *tid;
@property (nonatomic) void /* unknown type, empty encoding */ videoDuration;
@property (nonatomic) void /* unknown type, empty encoding */ currentPosition;
@property (nonatomic) void /* unknown type, empty encoding */ videoReplayCount;

- (id)initWithTid:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
