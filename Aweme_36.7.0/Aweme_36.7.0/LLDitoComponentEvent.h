@class NSString, NSDictionary, LLDitoPageContext, NSNumber;

@interface LLDitoComponentEvent : NSObject

@property (nonatomic) long long longestStage;
@property (nonatomic) long long errorStage;
@property (copy, nonatomic) NSString *errorMsg;
@property (copy, nonatomic) NSString *errorType;
@property (retain, nonatomic) NSNumber *stayTimeStartTimestamp;
@property (nonatomic) double stayTime;
@property (nonatomic) BOOL isViewStub;
@property (nonatomic) BOOL everHasSize;
@property (copy, nonatomic) NSString *subType;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *customTag;
@property (copy, nonatomic) NSString *templateURL;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (weak, nonatomic) LLDitoPageContext *context;

- (void)stayTimeRecordStart;
- (void)stayTimeRecordPause;
- (id)getComponentStateStringOf:(long long)a0;
- (id)viewModelExtraTrackParams;
- (void)setupWith:(id)a0 pageInfo:(id)a1;
- (void)updateWith:(id)a0 pageInfo:(id)a1;
- (BOOL)setNodeErrorStage:(long long)a0 message:(id)a1 errorType:(id)a2;
- (BOOL)setNodeLongestStage:(long long)a0;
- (id)trackDataWithScen:(id)a0 entityID:(id)a1 pageKey:(id)a2 bizCode:(id)a3 logID:(id)a4 sessionID:(id)a5;
- (void).cxx_destruct;
- (id)init;

@end
