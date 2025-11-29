@class NSString;

@interface IESLiveNoticeUploadCoverAlertModel : NSObject

@property (nonatomic) long long msgType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *tipURL;
@property (copy, nonatomic) NSString *tipTitle;

- (id)initWithTitle:(id)a0 content:(id)a1 msgType:(long long)a2 tipURL:(id)a3 tipTitle:(id)a4;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 content:(id)a1;

@end
