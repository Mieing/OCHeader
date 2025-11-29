@class NSString;

@interface AWETemplateTagsBlockEvent : AWETemplateTagsTriggerEvent

@property (copy, nonatomic) NSString *userID;
@property (nonatomic) long long blockStatus;

- (void).cxx_destruct;

@end
