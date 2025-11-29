@class NSString, NSDictionary, TMNetworkContext;

@interface TMNetworkContentDetectItem : NSObject

@property (copy, nonatomic) NSString *itemID;
@property (retain, nonatomic) TMNetworkContext *context;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) NSDictionary *body;
@property (readonly, copy, nonatomic) NSString *itemType;

- (id)generateItemID;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
