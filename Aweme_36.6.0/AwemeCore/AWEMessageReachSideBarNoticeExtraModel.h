@class NSString, NSArray;

@interface AWEMessageReachSideBarNoticeExtraModel : NSObject

@property (copy, nonatomic) NSString *bussinessId;
@property (copy, nonatomic) NSArray *tempInfoArray;
@property (nonatomic) double noticeSendTime;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isValid;
- (id)initWithDictionary:(id)a0;

@end
