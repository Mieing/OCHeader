@class NSString;

@interface AWEIMOfficialNoticeDisableConfigStructModel : IESIMBaseApiModel

@property (copy, nonatomic) NSString *noticeTypeID;
@property (nonatomic) BOOL disturb;
@property (nonatomic) BOOL unsubscribe;
@property (retain, nonatomic) NSString *showName;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
