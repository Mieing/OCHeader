@class NSString;

@interface IESIMGroupImpl.ChatSettingsCheckItemViewModel : NSObject <IESIMChatSettingsCheckItemViewModelProtocol> {
    void /* function */ bizData;
    void /* function */ title;
    void /* unknown type, empty encoding */ isSelectedPublisher;
    void /* unknown type, empty encoding */ position;
}

@property (nonatomic, copy) id bizData;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) BOOL isSelected;

- (void).cxx_destruct;
- (id)init;

@end
