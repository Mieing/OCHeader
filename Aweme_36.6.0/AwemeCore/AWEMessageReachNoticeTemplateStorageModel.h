@class NSString;

@interface AWEMessageReachNoticeTemplateStorageModel : NSObject <NSCoding>

@property (copy, nonatomic) NSString *templateID;
@property (nonatomic) long long showCount;
@property (nonatomic) double msgTime;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
