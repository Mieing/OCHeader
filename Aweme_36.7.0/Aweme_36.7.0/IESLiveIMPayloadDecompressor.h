@class NSData, NSString;
@protocol IESLiveIMDecoder;

@interface IESLiveIMPayloadDecompressor : NSObject <IESLiveIMDecoder>

@property (retain, nonatomic) NSData *zstdDictData;
@property (copy, nonatomic) NSString *zstdDictVersion;
@property (retain, nonatomic) id<IESLiveIMDecoder> nextDecoder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)decode:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
