@class NSString, WechatShareUrlCheckConfigRecord;

@interface WeChatShareUrlCheckTask : NSObject

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *shareUrl;
@property (retain, nonatomic) WechatShareUrlCheckConfigRecord *record;
@property (copy, nonatomic) id /* block */ resumeShareBlock;
@property (nonatomic) BOOL hasBeenHandled;

- (id)initWithAppID:(id)a0 andShareUrl:(id)a1 resumeShareBlock:(id /* block */)a2;
- (void)continueShareTask;
- (void)blockShareTask;
- (BOOL)isRecordValid:(id)a0;
- (BOOL)isTaskParamsValid;
- (void).cxx_destruct;

@end
