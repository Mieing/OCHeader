@class NSString, NSMutableArray, TextState3rdPartyContext;
@protocol TextState3rdPartyHandler;

@interface TextStateJumpElement : NSObject

@property (retain, nonatomic) id<TextState3rdPartyHandler> handler;
@property (nonatomic) BOOL hasParsedHandler;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSMutableArray *dataItems;
@property (retain, nonatomic) TextState3rdPartyContext *context;

- (id)initWithJumpElement:(id)a0;
- (id)jumpElement;
- (void).cxx_destruct;

@end
