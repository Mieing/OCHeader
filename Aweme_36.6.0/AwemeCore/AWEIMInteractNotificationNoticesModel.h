@class NSNumber, NSString, NSArray;

@interface AWEIMInteractNotificationNoticesModel : IESIMBaseApiModel

@property (retain, nonatomic) NSNumber *noticeID;
@property (retain, nonatomic) NSNumber *createTime;
@property (copy, nonatomic) NSString *hint;
@property (copy, nonatomic) NSString *highlight;
@property (copy, nonatomic) NSString *senderName;
@property (nonatomic) BOOL isOfficial;
@property (retain, nonatomic) NSArray *effectGroup;
@property (retain, nonatomic) NSNumber *bornTS;
@property (retain, nonatomic) NSNumber *noticeType;
@property (retain, nonatomic) NSNumber *noticeSubType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
