@class NSString;

@interface WeChat.MBJsEventOnFinderMediaAdPreload : NSObject

@property (class, nonatomic, readonly) NSString *name;
@property (class, nonatomic, readonly) NSString *startPreloadAdMedia;
@property (class, nonatomic, readonly) NSString *pausePreloadAdMedia;
@property (class, nonatomic, readonly) NSString *resumePreloadAdMedia;
@property (class, nonatomic, readonly) NSString *stopPreloadAdMedia;
@property (class, nonatomic, readonly) NSString *eventImageInfoList;
@property (class, nonatomic, readonly) NSString *imageUrl;
@property (class, nonatomic, readonly) NSString *imageToken;

- (id)init;
- (void).cxx_destruct;

@end
