@class NSString;

@interface FlowIMBotConfigStruct : NSObject {
    void /* function */ ConfKey;
    void /* function */ ConfValue;
    void /* function */ ConfGroupKey;
}

@property (nonatomic, copy) NSString *ConfKey;
@property (nonatomic, copy) NSString *ConfValue;
@property (nonatomic, copy) NSString *ConfGroupKey;

- (void).cxx_destruct;
- (id)init;

@end
