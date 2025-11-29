@class AWEECOMIMImageItemModel;

@interface AWEECOMIMImageMsgModel : AWEECOMIMBaseMsgModel

@property (retain, nonatomic) AWEECOMIMImageItemModel *imageItemModel;

+ (Class)cellClass;

- (id)getImageCacheFromLocalPath:(id)a0;
- (BOOL)canShowFootDescSource;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;

@end
