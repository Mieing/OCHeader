@class NSString;

@interface FlowIMBotMsgRegenModeDataModel : NSObject {
    void /* function */ regenText;
    void /* function */ regenInstruction;
    void /* function */ regenLightIcon;
    void /* function */ regenDarkIcon;
}

@property (nonatomic) long long regenType;
@property (nonatomic, copy) NSString *regenText;
@property (nonatomic, copy) NSString *regenInstruction;
@property (nonatomic, copy) NSString *regenLightIcon;
@property (nonatomic, copy) NSString *regenDarkIcon;

- (void).cxx_destruct;
- (id)init;

@end
