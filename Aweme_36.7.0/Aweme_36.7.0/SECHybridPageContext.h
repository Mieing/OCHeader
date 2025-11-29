@class SECHybridUIContext, NSString, NSDictionary, SECHybridContainerContext, NSNumber, SECStandardURL;

@interface SECHybridPageContext : NSObject

@property (retain, nonatomic) SECStandardURL *url;
@property (retain, nonatomic) SECStandardURL *prevURL;
@property (copy, nonatomic) NSString *platform;
@property (copy, nonatomic) NSString *container;
@property (copy, nonatomic) NSDictionary *globalProps;
@property (retain, nonatomic) NSNumber *from3rdParty;
@property (retain, nonatomic) SECHybridUIContext *uiContext;
@property (retain, nonatomic) SECHybridContainerContext *containerContext;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *prevSession;
@property (nonatomic) double timestamp;

- (id)rulerParams;
- (void).cxx_destruct;
- (id)dictRepresentation;

@end
