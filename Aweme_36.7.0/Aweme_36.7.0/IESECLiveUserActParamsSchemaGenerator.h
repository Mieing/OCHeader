@class NSString, IESECLiveContext, IESECHybridParamsVerifyHelper;
@protocol IESECLiveUserRecordActionInterface;

@interface IESECLiveUserActParamsSchemaGenerator : NSObject

@property (weak, nonatomic) id<IESECLiveUserRecordActionInterface> actRecordManager;
@property (retain, nonatomic) IESECHybridParamsVerifyHelper *combineParamsHelper;
@property (copy, nonatomic) NSString *schema;
@property (weak, nonatomic) IESECLiveContext *liveContext;

- (id)currentTimeStr;
- (id)jumpHandler;
- (id)clickProductIDArray;
- (id)showProductIDArray;
- (void)appendUserActParamsToSchema:(id)a0 roomContext:(id)a1 actRecordManager:(id)a2 carryParamsType:(id)a3 userActParams:(id)a4 appendDefaultParams:(BOOL)a5;
- (id)curGuideProductID;
- (void)appendDefaultParamsToSchema:(id)a0;
- (id)clickTabProductIDArray;
- (id)curExplainProductID;
- (id)tracker;
- (void).cxx_destruct;

@end
