@class NSString;

@interface WCFPSRecorder : NSObject {
    void *m_sampler;
}

@property (nonatomic) unsigned long long trackingType;
@property (nonatomic) int recordID;
@property (nonatomic) BOOL dumpStacks;
@property (nonatomic) BOOL autoUpload;
@property (nonatomic) double dumpTimeBegin;
@property (nonatomic) double dumpTimeTotal;
@property (retain, nonatomic) NSString *scene;
@property (retain, nonatomic) NSString *reportID;
@property (retain, nonatomic) NSString *reportPath;
@property (retain, nonatomic) id customInfo;

- (id)init;
- (void)dealloc;
- (id)threadLabel;
- (void)startProfile:(int)a0 dumpMaxCount:(int)a1;
- (void)stopProfile;
- (void)saveStackSamples:(id)a0;
- (void)uploadStackSamples;
- (void).cxx_destruct;

@end
