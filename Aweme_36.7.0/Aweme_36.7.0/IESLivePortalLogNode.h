@class NSString, NSMutableArray;

@interface IESLivePortalLogNode : NSObject

@property (retain, nonatomic) NSMutableArray *logInfos;
@property (retain, nonatomic) NSMutableArray *errors;
@property (readonly, copy, nonatomic) NSString *type;

- (void)appendError:(id)a0;
- (void)appendLogInfo:(id)a0 extra:(id)a1;
- (void).cxx_destruct;
- (void)report;
- (id)description;
- (id)initWithType:(id)a0;

@end
