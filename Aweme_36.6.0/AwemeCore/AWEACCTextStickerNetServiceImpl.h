@class NSString;

@interface AWEACCTextStickerNetServiceImpl : NSObject <ACCTextStickerNetServiceProtocol, ACCTextStickerReadingNetServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)requestAudioForTextReading:(id)a0 textSpeaker:(id)a1 speedRate:(id)a2 completionBlock:(id /* block */)a3;
- (id)requestAudioForTextReading:(id)a0 textSpeaker:(id)a1 enableTimestamp:(BOOL)a2 speedRate:(id)a3 completionBlock:(id /* block */)a4;
- (id)parseWordsFromDataDict:(id)a0;
- (id)requestPollTokenForTextReading:(id)a0 completionBlock:(id /* block */)a1;
- (id)pollAudioForTextReadingToken:(id)a0 completionBlock:(id /* block */)a1;

@end
