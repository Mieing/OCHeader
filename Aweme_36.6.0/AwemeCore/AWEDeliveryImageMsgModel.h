@class AWEDeliveryImageItemModel;

@interface AWEDeliveryImageMsgModel : AWEDeliveryBaseMsgModel

@property (retain, nonatomic) AWEDeliveryImageItemModel *imageItemModel;

+ (Class)cellClass;

- (id)getImageCacheFromLocalPath:(id)a0;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;

@end
