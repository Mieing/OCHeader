@class NSString;

@interface WeChat.MBCommonFinderMediaJsEvent : NSObject

@property (class, nonatomic, readonly) NSString *eventName;
@property (class, nonatomic, readonly) NSString *eventData;
@property (class, nonatomic, readonly) NSString *eventFrameSetName;
@property (class, nonatomic, readonly) NSString *eventCardInfo;
@property (class, nonatomic, readonly) NSString *eventVideoInfoList;
@property (class, nonatomic, readonly) NSString *videoUrl;
@property (class, nonatomic, readonly) NSString *videoToken;

- (id)init;
- (void).cxx_destruct;

@end
