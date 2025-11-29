@class NSString, UploaderTracker, NSArray, NSDictionary;

@interface ResultInfo : NSObject

@property (copy, nonatomic) NSString *key;
@property (nonatomic) long long code;
@property (retain, nonatomic) UploaderTracker *tracker;
@property (retain, nonatomic) NSArray *uploadLog;
@property (retain, nonatomic) NSDictionary *completedResponseDic;
@property (readonly, copy, nonatomic) NSString *uploadFilePath;

- (id)initWithInfo:(id)a0 code:(long long)a1 tracker:(id)a2 uploadLog:(id)a3 uploadFilePath:(id)a4;
- (void).cxx_destruct;

@end
