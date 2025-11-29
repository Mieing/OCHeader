@class NSString, FlowIMBotActionIconViewModel;

@interface FlowIMBotSelectTextActionModel : NSObject {
    void /* unknown type, empty encoding */ id;
    void /* function */ type;
    void /* function */ name;
}

@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) FlowIMBotActionIconViewModel *icon;

- (void).cxx_destruct;
- (id)init;

@end
