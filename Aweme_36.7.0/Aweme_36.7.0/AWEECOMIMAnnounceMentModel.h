@class NSString, AWEECOMIMChatRichTextModel, NSDictionary;

@interface AWEECOMIMAnnounceMentModel : NSObject

@property (copy, nonatomic) NSString *leftIconString;
@property (copy, nonatomic) NSString *rightIconString;
@property (copy, nonatomic) NSString *button_text;
@property (nonatomic) long long warnType;
@property (nonatomic) long long refreshTime;
@property (nonatomic) long long pushRefreshTime;
@property (retain, nonatomic) AWEECOMIMChatRichTextModel *richTextModel;
@property (nonatomic) BOOL tipTextHasLink;
@property (nonatomic) BOOL isClear;
@property (nonatomic) long long annnoncementType;
@property (copy, nonatomic) NSString *skipURLString;
@property (copy, nonatomic) NSDictionary *viewTrackInfo;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
