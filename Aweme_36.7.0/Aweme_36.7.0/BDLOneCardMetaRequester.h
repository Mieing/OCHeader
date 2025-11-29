@class BDLOneCardCardMetaRequest, NSArray, BDLOneCardGroupMetaRequest;

@interface BDLOneCardMetaRequester : NSObject

@property (retain) BDLOneCardGroupMetaRequest *groupRequestObj;
@property (retain) BDLOneCardCardMetaRequest *cardRequestObj;
@property (retain) NSArray *cardRequestObjs;

- (void)startRequest:(id /* block */)a0;
- (id)initWithCardInfo:(id)a0;
- (void)startGroupRequest:(id /* block */)a0;
- (void)startCardRequest:(id /* block */)a0;
- (void).cxx_destruct;

@end
