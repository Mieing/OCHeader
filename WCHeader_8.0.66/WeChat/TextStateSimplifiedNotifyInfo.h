@class NSString;

@interface TextStateSimplifiedNotifyInfo : NSObject

@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) NSString *headImageUrl;
@property (nonatomic) BOOL isContact;

- (id)initWithNotifyInfo:(id)a0;
- (void).cxx_destruct;

@end
