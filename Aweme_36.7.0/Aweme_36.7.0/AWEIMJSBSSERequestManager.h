@class NSMutableDictionary;

@interface AWEIMJSBSSERequestManager : NSObject

@property (class, readonly, nonatomic) AWEIMJSBSSERequestManager *sharedInstance;

@property (retain, nonatomic) NSMutableDictionary *taskDic;

- (id)p_parseDataWithData:(id)a0 request:(id)a1;
- (void)startSSEWithParamModel:(id)a0;
- (void)stopSSEWithUniqueID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
