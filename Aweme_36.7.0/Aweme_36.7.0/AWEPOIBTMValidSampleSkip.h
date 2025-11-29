@class NSString;

@interface AWEPOIBTMValidSampleSkip : NSObject <AWEPOISkipCheckProtocol>

@property (nonatomic) double sampleRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)judgeIsSkipCheckWithEvent:(id)a0 params:(id)a1;
- (double)initSampleRatio;
- (id)init;

@end
