@class NSString, NSArray;

@interface FlowAppletInterface.AIMenuItem : NSObject {
    void /* function */ text;
    void /* function */ textColorLight;
    void /* function */ textColorDark;
    void /* function */ iconLight;
    void /* function */ iconDark;
    void /* function */ id;
    void /* unknown type, empty encoding */ itemStyle;
    void /* unknown type, empty encoding */ switchStatus;
    void /* unknown type, empty encoding */ forbiddenDismissAfterClick;
    void /* unknown type, empty encoding */ disableClick;
    void /* function */ lineItems;
}

@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *textColorLight;
@property (nonatomic, copy) NSString *textColorDark;
@property (nonatomic, copy) NSString *iconLight;
@property (nonatomic, copy) NSString *iconDark;
@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSArray *lineItems;

- (void).cxx_destruct;
- (id)init;

@end
