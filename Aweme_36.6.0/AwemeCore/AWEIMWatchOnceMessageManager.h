@class NSString, NSMutableDictionary;
@protocol AWEIMWatchOnceMessageManagerDelegate;

@interface AWEIMWatchOnceMessageManager : NSObject <IESIMWatchOnceMessageInterface>

@property (retain, nonatomic) NSMutableDictionary *readingMessages;
@property (weak, nonatomic) id<AWEIMWatchOnceMessageManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)isSupportWatchOnceText:(id)a0;
- (void)beginReadWithWatchOnceMessages:(id)a0;
- (void)readFinishWithWatchOnceMessages:(id)a0;
- (void)clearReadingMessage;
- (void)setWatchOnceTextModel:(BOOL)a0 conversation:(id)a1;
- (void)setWatchOnceQuickPhotoModel:(BOOL)a0 conversation:(id)a1;
- (BOOL)isInWatchOnceTextModel:(id)a0;
- (BOOL)isInWatchOnceQuickPhotoModel:(id)a0;
- (BOOL)isReadingWatchOnceMessage:(id)a0;
- (int)watchOnceMediaLoopTimes;
- (void).cxx_destruct;

@end
