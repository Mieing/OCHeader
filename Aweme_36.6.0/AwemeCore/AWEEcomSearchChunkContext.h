@class NSDate;

@interface AWEEcomSearchChunkContext : NSObject

@property (nonatomic, getter=isLiteReceived) BOOL liteReceived;
@property (nonatomic, getter=isFullReceived) BOOL fullReceived;
@property (nonatomic, getter=isAsyncReceived) BOOL asyncReceived;
@property (nonatomic, getter=isPatchReceived) BOOL patchReceived;
@property (nonatomic, getter=isFedAfterReceived) BOOL fedAfterReceived;
@property (nonatomic, getter=isLiteProcessed) BOOL liteProcessed;
@property (nonatomic, getter=isFullProcessed) BOOL fullProcessed;
@property (nonatomic, getter=isAsyncProcessed) BOOL asyncProcessed;
@property (nonatomic, getter=isPatchProcessed) BOOL patchProcessed;
@property (nonatomic, getter=isFedAfterProcessed) BOOL fedAfterProcessed;
@property (retain, nonatomic) NSDate *liteReceiveTime;
@property (retain, nonatomic) NSDate *fullReceiveTime;
@property (retain, nonatomic) NSDate *asyncReceiveTime;
@property (retain, nonatomic) NSDate *patchReceiveTime;
@property (retain, nonatomic) NSDate *fedAfterReceiveTime;

- (void)resetAllStates;
- (void)markChunkReceived:(unsigned long long)a0;
- (void)markChunkProcessed:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
