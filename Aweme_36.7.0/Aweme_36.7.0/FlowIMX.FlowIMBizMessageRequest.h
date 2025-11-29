@class NSString, NSDictionary;

@interface FlowIMX.FlowIMBizMessageRequest : NSObject <NSObject> {
    void /* function */ bizCode;
    void /* function */ placeHolders;
}

@property (nonatomic, copy) NSString *bizCode;
@property (nonatomic, copy) NSDictionary *placeHolders;

- (void).cxx_destruct;
- (id)init;

@end
