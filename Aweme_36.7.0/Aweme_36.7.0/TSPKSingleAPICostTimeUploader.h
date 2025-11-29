@class NSString, NSMutableArray, NSMutableDictionary;
@protocol TSPKLock;

@interface TSPKSingleAPICostTimeUploader : NSObject

@property (copy, nonatomic) NSString *apiType;
@property (retain, nonatomic) NSMutableArray *customCallTimeArray;
@property (retain, nonatomic) NSMutableDictionary *systemCallInfo;
@property (retain, nonatomic) id<TSPKLock> lock;
@property (copy, nonatomic) NSString *customUploadTitle;
@property (copy, nonatomic) NSString *uploadTitle;

- (void)reportWithInfo:(id)a0;
- (id)getCustomStatisticsKey;
- (id)getDefaultStatisticsKey;
- (id)getKeyWithContent:(id)a0;
- (id)initWithApiType:(id)a0 uploadTitle:(id)a1 customUploadTitle:(id)a2;
- (void)handleAPIAccessWithHashTag:(id)a0 beforeOrAfter:(BOOL)a1;
- (void)handleCustomAPIAccess;
- (void).cxx_destruct;

@end
