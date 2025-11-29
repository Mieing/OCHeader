@class NSData, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface QBWupBrowserInfo : NSObject <NSCoding> {
    NSString *_QUA2;
    NSString *_QGUID;
    NSString *_QUA;
}

@property (retain, nonatomic) NSData *innerGuidData;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic) char *guid;
@property (readonly, nonatomic) BOOL isGuidValid;
@property (readonly, nonatomic) char *hexGuid;
@property (readonly, nonatomic) NSString *hexGuidString;
@property (readonly, nonatomic) NSData *guidData;
@property (retain) NSString *UUID;
@property (retain, nonatomic) NSString *qAuth;
@property (retain, nonatomic) NSString *userAgent;
@property long long timestamp;
@property (retain) NSString *contentMd5;

+ (id)filePath;
+ (id)sharedBrowserInfo;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)saveToFile;
- (void)dealloc;
- (id)QGUID;
- (id)QUA2;
- (void)setQUA2:(id)a0;
- (id)QUA;
- (void)setQUA:(id)a0;
- (void)resetGuid;
- (id)serverUrl;
- (void)invalidateServerUrl:(id)a0;
- (void).cxx_destruct;

@end
