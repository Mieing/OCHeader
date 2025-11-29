@class ProtobufCGIWrap;

@interface CgiEvent : NSObject

@property (nonatomic) unsigned int eventId;
@property (retain, nonatomic) ProtobufCGIWrap *pbWrap;
@property (copy, nonatomic) id /* block */ completion;

+ (id)eventWithId:(unsigned int)a0 pbWrap:(id)a1 completion:(id /* block */)a2;

- (void).cxx_destruct;

@end
