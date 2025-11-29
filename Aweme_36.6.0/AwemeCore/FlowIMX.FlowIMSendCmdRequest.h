@class NSString, NSArray;

@interface FlowIMX.FlowIMSendCmdRequest : NSObject <NSObject> {
    void /* function */ bizCode;
    void /* function */ placeHolders;
}

@property (nonatomic, copy) NSString *bizCode;
@property (nonatomic, copy) NSArray *placeHolders;

- (id)initWithBizCode:(id)a0 placeHolders:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
