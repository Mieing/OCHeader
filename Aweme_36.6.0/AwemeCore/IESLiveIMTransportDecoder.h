@class NSString;
@protocol IESLiveIMDecoder;

@interface IESLiveIMTransportDecoder : NSObject <IESLiveIMDecoder>

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) id<IESLiveIMDecoder> nextDecoder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)decode:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
