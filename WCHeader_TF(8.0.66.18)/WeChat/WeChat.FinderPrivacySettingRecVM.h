@class NSString;

@interface WeChat.FinderPrivacySettingRecVM : NSObject {
    void /* unknown type, empty encoding */ finderContact;
    void /* unknown type, empty encoding */ sessionId;
    void /* unknown type, empty encoding */ switchStatus;
    void /* unknown type, empty encoding */ _notRecState;
    void /* unknown type, empty encoding */ _blackListState;
}

@property (nonatomic, copy) NSString *sessionId;

- (id)initWithFinderContact:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
