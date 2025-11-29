@class NSString, NSArray;

@interface IESIMGroupImpl.ChatSettingsCheckViewModel : NSObject <IESIMChatSettingsCheckViewModelProtocol> {
    void /* function */ title;
    void /* function */ sections;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSArray *sections;

- (void).cxx_destruct;
- (id)init;

@end
