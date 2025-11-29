@class NSArray;

@interface IESIMGroupImpl.ChatSettingsCheckSectionViewModel : NSObject <IESIMChatSettingsCheckSectionViewModelProtocol> {
    void /* function */ items;
    void /* function */ didSelectedItemBlock;
}

@property (nonatomic, copy) NSArray *items;
@property (nonatomic, copy) id /* block */ didSelectedItemBlock;

- (void).cxx_destruct;
- (id)init;

@end
