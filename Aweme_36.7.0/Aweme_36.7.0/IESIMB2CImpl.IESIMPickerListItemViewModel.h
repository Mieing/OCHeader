@class NSString;

@interface IESIMB2CImpl.IESIMPickerListItemViewModel : NSObject <IESIMB2CPickerListItemViewModelProtocol> {
    void /* function */ title;
    void /* function */ avatarUrl;
    void /* unknown type, empty encoding */ wechatID;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *avatarUrl;

- (void).cxx_destruct;
- (id)init;

@end
