@interface FlowIMConversationPageInfo : NSObject {
    void /* unknown type, empty encoding */ pageListValue;
    void /* unknown type, empty encoding */ bizTypeValue;
    void /* unknown type, empty encoding */ defaultStatusValue;
    void /* unknown type, empty encoding */ pageList;
    void /* unknown type, empty encoding */ bizType;
    void /* unknown type, empty encoding */ showLeftActionBarIcon;
    void /* unknown type, empty encoding */ showTmplInputBox;
}

@property (nonatomic, readonly) long long defaultStatus;
@property (nonatomic, readonly) BOOL supportUpperInputview;

- (void).cxx_destruct;
- (id)init;

@end
