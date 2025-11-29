@class NSString;

@interface WAReportForwardMessageItem : WAReportBaseItem

@property (copy, nonatomic) NSString *currentTitle;
@property (copy, nonatomic) NSString *sharePath;
@property (copy, nonatomic) NSString *shareTitle;
@property (copy, nonatomic) NSString *shareId;
@property (nonatomic) long long userCount;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *webViewUrl;
@property (copy, nonatomic) NSString *imageURL;
@property (nonatomic) unsigned int destinationType;
@property (copy, nonatomic) NSString *messageExtraData;
@property (nonatomic) long long shareActionType;
@property (nonatomic) long long shareSourceType;

- (id)reportString;
- (void).cxx_destruct;

@end
