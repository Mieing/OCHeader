@class NSString, NSMutableArray;

@interface SalamanderAnnieX.IShowActionSheetMethodRequest : NSObject {
    void /* function */ title;
    void /* function */ subtitle;
    void /* unknown type, empty encoding */ __rts_actions;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, retain) NSMutableArray *actions;

- (id)init:(id)a0 :(id)a1 :(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
