@class AWEECOMIMVideoItemModel;

@interface AWEECOMIMVideoMsgModel : AWEECOMIMBaseMsgModel

@property (retain, nonatomic) AWEECOMIMVideoItemModel *videoItemModel;

+ (Class)cellClass;

- (BOOL)canShowFootDescSource;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;

@end
