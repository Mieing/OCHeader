@class NSDictionary, Protocol;

@interface CKDDProtoProxy : NSProxy

@property (retain, nonatomic) Protocol *proto;
@property (retain, nonatomic) NSDictionary *sigs;

- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)initWithProto:(id)a0;

@end
