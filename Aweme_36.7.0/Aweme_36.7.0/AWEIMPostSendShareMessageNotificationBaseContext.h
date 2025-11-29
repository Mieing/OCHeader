@class NSArray, NSString, NSDictionary;

@interface AWEIMPostSendShareMessageNotificationBaseContext : NSObject <AWEIMPostSendShareMessageNotificationBaseContextProtocol>

@property (copy, nonatomic) NSArray *shareList;
@property (copy, nonatomic) NSString *tips;
@property (copy, nonatomic) NSDictionary *trackDict;
@property (copy, nonatomic) NSDictionary *extraDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
