@class NSString, IESIMURLModel, NSNumber;

@interface AWEIMNoticeFoldStructModel : IESIMBaseApiModel

@property (nonatomic) long long group;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long foldStatus;
@property (retain, nonatomic) IESIMURLModel *imageUrl;
@property (retain, nonatomic) NSNumber *lastMsgTime;
@property (nonatomic) BOOL hasUnread;
@property (nonatomic) long long unreadCount;
@property (nonatomic) long long demoteState;

+ (id)imageUrlJSONTransformer;
+ (id)foldStatusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
