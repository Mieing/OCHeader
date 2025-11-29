@class NSString, IESMMBingoBeats;

@interface NPDynamicResult_OC : NSObject

@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSString *templateID;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *effectURS;
@property (nonatomic) long long musicClipStartTime;
@property (nonatomic) long long musicClipEndTime;
@property (copy, nonatomic) NSString *musicPath;
@property (retain, nonatomic) IESMMBingoBeats *beat;

- (int)cppType;
- (struct shared_ptr<nle::preset::NPDynamicResult> { struct NPDynamicResult *x0; struct __shared_weak_count *x1; })convertToCppValue;
- (void).cxx_destruct;

@end
