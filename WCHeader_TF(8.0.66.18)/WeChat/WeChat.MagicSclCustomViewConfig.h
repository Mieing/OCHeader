@class NSString;

@interface WeChat.MagicSclCustomViewConfig : NSObject {
    void /* unknown type, empty encoding */ bizName;
    void /* unknown type, empty encoding */ frameSetName;
    void /* unknown type, empty encoding */ frameSetData;
    void /* unknown type, empty encoding */ frameSetRootName;
}

@property (nonatomic, copy) NSString *bizName;
@property (nonatomic, copy) NSString *frameSetName;
@property (nonatomic, copy) NSString *frameSetData;
@property (nonatomic, retain) void /* unknown type, empty encoding */ containerView;
@property (nonatomic, copy) NSString *frameSetRootName;

- (id)initWithBizName:(id)a0 frameSetName:(id)a1 frameSetData:(id)a2 containerView:(id)a3 frameSetRootName:(id)a4;
- (id)init;
- (void).cxx_destruct;

@end
