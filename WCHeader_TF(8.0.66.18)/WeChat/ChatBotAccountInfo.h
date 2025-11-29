@class NSString;

@interface ChatBotAccountInfo : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int agreementId;

+ (id)createFromInfoDic:(id)a0;

- (void).cxx_destruct;

@end
