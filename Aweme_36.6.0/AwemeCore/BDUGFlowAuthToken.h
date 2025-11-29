@class NSString, NSMutableDictionary, NSDictionary;

@interface BDUGFlowAuthToken : NSObject

@property (retain, nonatomic) NSMutableDictionary *params;
@property (weak, nonatomic) id bindedEntity;
@property (retain, nonatomic) NSMutableDictionary *mutableMonitorParams;
@property (copy, nonatomic) NSString *certID;
@property (nonatomic) double timestamp;
@property (readonly, copy, nonatomic) NSDictionary *bizData;
@property (readonly, copy, nonatomic) NSDictionary *monitorParams;
@property (nonatomic) BOOL isFromJSB;

+ (id)tokenWithCertID:(id)a0;

- (id)appendMonitorParams:(id)a0;
- (id)appendBizData:(id)a0;
- (void)bindEntity:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
