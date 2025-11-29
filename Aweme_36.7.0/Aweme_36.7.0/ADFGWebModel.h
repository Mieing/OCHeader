@class NSDictionary, NSString;

@interface ADFGWebModel : NSObject

@property (retain, nonatomic) NSDictionary *extraUserInfo;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) BOOL scrollEnabled;
@property (nonatomic) BOOL showLocalSubmitRecord;
@property (copy, nonatomic) NSString *taskID;
@property (retain, nonatomic) NSDictionary *taskSettingDict;
@property (nonatomic) BOOL isExpired;

- (void).cxx_destruct;
- (id)init;

@end
