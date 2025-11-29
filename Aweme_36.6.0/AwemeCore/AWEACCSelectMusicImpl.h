@class NSString;

@interface AWEACCSelectMusicImpl : NSObject <ACCSelectMusicProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)selectMusicPageWithInputData:(id)a0 pick:(id /* block */)a1 cancel:(id /* block */)a2 close:(id /* block */)a3;
- (id)selectMusicPageWithInputData:(id)a0 pick:(id /* block */)a1 cancel:(id /* block */)a2;

@end
